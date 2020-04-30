#include <iostream>
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodoLista(Nodo *&lista,int dato);
int main(){
    Nodo *lista=NULL;
    insertarNodoLista(lista,5);
    insertarNodoLista(lista,6);
    insertarNodoLista(lista,4);
    system("pause");
    return 0;
}
void insertarNodoLista(Nodo *&lista,int dato){
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->dato=dato;
    Nodo *aux1=lista;
    Nodo *aux2;
    while ( (aux1!=NULL) && (aux1->dato<dato) ){
        aux2=aux1;
        aux1=aux1->siguiente;
    }
    if(lista==aux1){
        lista=nuevoNodo;
        nuevoNodo->siguiente=aux1;
    }else{
        aux2->siguiente=nuevoNodo;
        nuevoNodo->siguiente=aux1;
    }
    std::cout<<"El dato "<<dato<<" se ha insertado\n";
}
