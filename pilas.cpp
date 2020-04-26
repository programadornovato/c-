/*
Crear la función mostrarNodos.
Crear elementos de forma dinámica.
Mostrar los nodos creados previamente.
Borrar todos los nodos.
Volver a mostrar la pila vacía.
*/
#include <iostream>
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertaNodo(Nodo *&pila,int n);
void quitarNodo(Nodo *&pila,int &n);
void MostrarNodos(Nodo *&pila);
int main(){
    Nodo *pila=NULL;
    int numero,nElementos,elemento;
    std::cout<<"Humano cuantos elementos deseas insertar: ";
    std::cin>>nElementos;
    for (int i = 0; i < nElementos; i++)
    {
        std::cout<<"Elemento "<<i+1<<" :";
        std::cin>>elemento;
        insertaNodo(pila,elemento);
    }
    MostrarNodos(pila);
    while (pila!=NULL)
    {
        quitarNodo(pila,numero);
    }
    MostrarNodos(pila);
    system("pause");
    return 0;
}
void insertaNodo(Nodo *&pila,int n){
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->dato=n;
    nuevoNodo->siguiente=pila;
    pila=nuevoNodo;
    std::cout<<"El dato "<<n<<" fue insertado exitosamente\n";
}
void quitarNodo(Nodo *&pila,int &n){
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}
void MostrarNodos(Nodo *&pila){
    while (pila!=NULL)
    {
        std::cout<<pila->dato<<"\n";
        pila=pila->siguiente;
    }
    
}