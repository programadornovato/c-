#include <iostream>
struct Nodo{
    int dato;
    Nodo *izq;
    Nodo *der;
};
Nodo *arbol=NULL;
Nodo *crearNodo(int dato);
void insertarNodo(Nodo *&arbol,int dato);
void menu();
int main(){
    menu();
    system("pause");
    return 0;
}
void menu(){
    int opcion,dato;
    regreaMenu:
    system("cls");
    std::cout<<"\tMENU\n";
    std::cout<<"1.- Insertar un nodo\n";
    std::cout<<"2.- Salir\n";
    std::cout<<"Humano ingresa una opcion:";
    std::cin>>opcion;
    switch (opcion)
    {
    case 1:
        std::cout<<"Ingresa el numero del nodo a insertar:";
        std::cin>>dato;
        insertarNodo(arbol,dato);
        system("pause");
        goto regreaMenu;
        break;
    
    default:
        return;
        break;
    }
}
Nodo *crearNodo(int dato){
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->dato=dato;
    nuevoNodo->izq=NULL;
    nuevoNodo->der=NULL;
}
void insertarNodo(Nodo *&arbol,int dato){
    if(arbol==NULL){
        Nodo *nuevoNodo=crearNodo(dato);
        arbol=nuevoNodo;
    }else{
        int valorRaiz=arbol->dato;
        if(dato<valorRaiz){
            insertarNodo(arbol->izq,dato);
        }else{
            insertarNodo(arbol->der,dato);
        }
    }
}