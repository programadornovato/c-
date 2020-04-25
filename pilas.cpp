#include <iostream>
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertaNodo(Nodo *&pila,int n);
int main(){
    Nodo *pila=NULL;
    insertaNodo(pila,5);
    insertaNodo(pila,6);
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