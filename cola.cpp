#include <iostream>
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&front,Nodo *&back,int dato);
void mostrarNodos(Nodo *&front);
int main(){
    Nodo *front=NULL;
    Nodo *back=NULL;
    insertarNodo(front,back,5);
    insertarNodo(front,back,6);
    insertarNodo(front,back,7);
    mostrarNodos(front);
    system("pause");
    return 0;
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