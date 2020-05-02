#include <iostream>
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&lista,int dato);
void mostrarNodos(Nodo *&lista);
void buscarMayorMenorNodos(Nodo *&lista,int &mayor,int &menor);
int main(){
    int numero,mayor,menor;
    char respuesta;
    Nodo *lista=NULL;
    regresar:
    std::cout<<"Humano ingresa un numero:";
    std::cin>>numero;
    insertarNodo(lista,numero);
    std::cout<<"Humano deseas ingresar mas numeros (s/n):";
    std::cin>>respuesta;
    if(respuesta=='s' || respuesta=='S' ){
        goto regresar;
    }
    mostrarNodos(lista);
    buscarMayorMenorNodos(lista,mayor,menor);
    std::cout<<"Humano aqui esta tus pinches numeros mayor: "<<mayor<<" y el menor:"<<menor<<"\n";
    system("pause");
    return 0;
}
void insertarNodo(Nodo *&lista,int dato){
    Nodo *nuevoNodo=new Nodo();
    Nodo *aux;
    nuevoNodo->dato=dato;
    nuevoNodo->siguiente=NULL;
    if(lista==NULL){
        lista=nuevoNodo;
    }else{
        aux=lista;
        while (aux->siguiente!=NULL)
        {
            aux=aux->siguiente;
        }
        aux->siguiente=nuevoNodo;
    }
    std::cout<<"Se inserto el nodo "<<dato<<"\n";
}
void mostrarNodos(Nodo *&lista){
    Nodo *clon=new Nodo();
    clon=lista;
    while (clon!=NULL)
    {
        std::cout<<"Dato: "<<clon->dato<<"\n";
        clon=clon->siguiente;
    }
}
void buscarMayorMenorNodos(Nodo *&lista,int &mayor,int &menor){
    int auxMayor=0,auxMenor=99999;
    while (lista!=NULL){
        if(lista->dato > auxMayor ){
            auxMayor=lista->dato;
        }
        if(lista->dato < auxMenor){
            auxMenor=lista->dato;
        }
        lista=lista->siguiente;
    }
    mayor=auxMayor;
    menor=auxMenor;
}