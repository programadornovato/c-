/*
Crear la función “nuevoNodo” donde se agregaran nodos a la pila.
Crear la función “mostrarNodos” donde se mostraran todos los nodos agregados a la pila.
En main le pediremos al humano que ingrese cuantos datos quiera.
Mostrar todos los nodos ingresados por el humano.
*/
#include <iostream>
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void nuevoNodo(Nodo *&pila,int numero);
void mostrarNodos(Nodo *&pila);
int main(){
    Nodo *pila=NULL;
    int n;
    char respuesta;
    do
    {
        std::cout<<"Humano ingresa u numero: ";
        std::cin>>n;
        nuevoNodo(pila,n);
        std::cout<<"Humano desea ingresar mas datos (s/n):";
        std::cin>>respuesta;
    } while (respuesta=='s' || respuesta=='S');
    std::cout<<"\n\nDatos de la pila\n";
    mostrarNodos(pila);
    
    system("pause");
    return 0;
}
void nuevoNodo(Nodo *&pila,int numero){
    Nodo *nodoNuevo=new Nodo();
    nodoNuevo->dato=numero;
    nodoNuevo->siguiente=pila;
    pila=nodoNuevo;
}
void mostrarNodos(Nodo *&pila){
    while (pila!=NULL)
    {
        std::cout<<pila->dato<<"\n";
        pila=pila->siguiente;
    }
}