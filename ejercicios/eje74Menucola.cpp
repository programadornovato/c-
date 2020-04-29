/*
Crear la función “menu” que pregunte al humano que es lo que quiere hacer.
1.- Insertar carácter a la cola.
2.- Mostrar elementos de la cola.
3.- Salir.
*/
#include <iostream>
#include <conio.h>
struct Nodo
{
    char dato;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&front,Nodo *&back,int dato);
void mostrarNodos(Nodo *&front);
int menu();
int main(){
    menu();
    system("pause");
    return 0;
}
int menu(){
    int respuesta;
    char caracter;
    Nodo *front=NULL,*back=NULL;
    menu:
    system("cls");
    std::cout<<"Humano elije una opcion para manipular tu cola.\n";
    std::cout<<"1.- Insertar carácter a la cola.\n";
    std::cout<<"2.- Mostrar elementos de la cola.\n";
    std::cout<<"3.- Salir.\n";
    std::cin>>respuesta;
    switch (respuesta)
    {
    case 1:
        std::cout<<"Que caracter te vas a insertar en la cola: ";
        std::cin>>caracter;
        insertarNodo(front,back,caracter);
        goto menu;
        break;
    case 2:
        std::cout<<"Estos son los elementos de tu cola\n ";
        mostrarNodos(front);
        getch();
        goto menu;
        break;
    
    default:
    return 0;
        break;
    }
}
void insertarNodo(Nodo *&front,Nodo *&back,int dato){
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->dato=dato;
    nuevoNodo->siguiente=NULL;
    if(front==NULL){
        front=nuevoNodo;
        back=nuevoNodo;
    }
    else{
        back->siguiente=nuevoNodo;
        back=nuevoNodo;
    }
    std::cout<<"Se inserto un nodo con el dato "<<dato<<"\n";
}
void mostrarNodos(Nodo *&front){
    while (front!=NULL)
    {
        std::cout<<"Dato: "<<front->dato<<"\n";
        front=front->siguiente;
    }
    
}
