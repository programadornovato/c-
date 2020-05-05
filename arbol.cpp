#include <iostream>
struct Nodo{
    int dato;
    Nodo *izq;
    Nodo *der;
};
Nodo *arbol=NULL;
Nodo *crearNodo(int dato);
void insertarNodo(Nodo *&arbol,int dato);
void mostrarArbol(Nodo *&arbol,int cont);
bool buscarNodoArbol(Nodo *&arbol,int numBuscar);
void preorden(Nodo *&arbol);
void inorden(Nodo *&arbol);
void menu();
int main(){
    menu();
    system("pause");
    return 0;
}
void menu(){
    int opcion,dato;
    regresaMenu:
    system("cls");
    std::cout<<"\tMENU\n";
    std::cout<<"1.- Insertar un nodo\n";
    std::cout<<"2.- Mostrar arbol\n";
    std::cout<<"3.- Buscar un nodo en el arbol\n";
    std::cout<<"4.- Mostrar arbol en preorden\n";
    std::cout<<"5.- Mostrar arbol en inorden\n";
    std::cout<<"6.- Salir\n";
    std::cout<<"Humano ingresa una opcion:";
    std::cin>>opcion;
    switch (opcion)
    {
    case 1:
        std::cout<<"Ingresa el numero del nodo a insertar:";
        std::cin>>dato;
        insertarNodo(arbol,dato);
        system("pause");
        goto regresaMenu;
        break;
    case 2:
        std::cout<<"\n\tARBOL\n";
        mostrarArbol(arbol,0);
        std::cout<<"\n";
        system("pause");
        goto regresaMenu;
        break;
    case 3:
        std::cout<<"Ingrese el numero a buscar en el arbol:";
        std::cin>>dato;
        if(buscarNodoArbol(arbol,dato)==true){
            std::cout<<"El dato "<<dato<<" si se encontro en el arbol\n";
        }else{
            std::cout<<"El dato "<<dato<<" no se encontro en el arbol\n";
        }
        system("pause");
        goto regresaMenu;
        break;
    case 4: 
        std::cout<<"\t ARBOL EN PREORDEN\n";
        preorden(arbol);
        std::cout<<"\n";
        system("pause");
        goto regresaMenu;
        break;
    case 5:
        std::cout<<"\t ARBOL EN INORDEN\n";
        inorden(arbol);
        std::cout<<"\n";
        system("pause");
        goto regresaMenu;
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
void mostrarArbol(Nodo *&arbol,int cont){
    if(arbol==NULL){
        return;
    }else{
        mostrarArbol(arbol->der,cont+1);
        for (int i = 0; i < cont; i++)
        {
            std::cout<<"       ";
        }
        std::cout<<arbol->dato<<"\n";
        mostrarArbol(arbol->izq,cont+1);
    }
}
bool buscarNodoArbol(Nodo *&arbol,int numBuscar){
    if(arbol==NULL){
        return false;
    }else if(arbol->dato==numBuscar){
        return true;
    }else if(numBuscar<arbol->dato){
        return buscarNodoArbol(arbol->izq,numBuscar);
    }else{
        return buscarNodoArbol(arbol->der,numBuscar);
    }
}
void preorden(Nodo *&arbol){
    if(arbol==NULL){
        return;
    }else{
        std::cout<<arbol->dato<<" - ";
        preorden(arbol->izq);
        preorden(arbol->der);
    }
}
void inorden(Nodo *&arbol){
    if(arbol==NULL){
        return;
    }else{
        inorden(arbol->izq);
        std::cout<<arbol->dato<<" - ";
        inorden(arbol->der);
    }
}