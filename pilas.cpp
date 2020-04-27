#include <iostream>
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertaNodo(Nodo *&pila,int n);
void quitarNodo(Nodo *&pila,int &n);
void mostrarNodos(Nodo *&pila);
int main(){
    Nodo *pila=NULL;
    int numero,nElementos,elemento;
    std::cout<<"Humano cunatos elementos deseas insertar: ";
    std::cin>>nElementos;
    for (int  i = 0; i < nElementos; i++)
    {
        std::cout<<"Elemento "<<i+1<<": ";
        std::cin>>elemento;
        insertaNodo(pila,elemento);
    }
    std::cout<<"\n";
    mostrarNodos(pila);
    while (pila!=NULL)
    {
        quitarNodo(pila,numero);
    }
    mostrarNodos(pila);
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
void mostrarNodos(Nodo *&pila){
    while (pila!=NULL)
    {
        std::cout<<pila->dato<<"\n";
        pila=pila->siguiente;
    }
}