#include <iostream>
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void agregarPila(Nodo *&,int numero); 
int main(){
	Nodo *pila = NULL;	//Inicializamos pila
	int dato;
	char respuesta;
	
	do{ //Pedimos todos los elementos de la pila
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
	
		cout<<"\nDesea agregar otro numero a pila(s/n): ";
		cin>>respuesta;
	}while((respuesta == 's')||(respuesta=='S'));
    system("pause");
    return 0;
}
void agregarPila(Nodo *&pila,int numero){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->siguiente = pila;
	pila = nuevoNodo;
}
