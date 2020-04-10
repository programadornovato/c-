/*
Crear una estructura con nombre y compraTA del cliente.
Inicializar nombre del cliente.
Pedir al humano que ingrese el id del cliente y la compraTA.
Mostrará saldo de todos los clientes.
*/
#include <iostream>

struct Clientes
{
    char nombre[65];
    int tiempoAire=0;
}cliente[3]={{"Pepe"},{"Maria"},{"Juana"}};
int main(){
    int tiempoAire=0,id;
    char opcion;
    std::cout<<"LISTA DE CLIENTES\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Id:"<<i<<"|Nombre:"<<cliente[i].nombre<<"\n";
    }
    regresa:
    std::cout<<"Humano ingresa id al que se le va a recarga el tiempo aire:\n";
    std::cin>>id;
    if(cliente[id].nombre[0]=='\0'){
        std::cout<<"Humano estupido este cliente no existe intentalo de nuevo:\n";
        goto regresa;
    }
    else{
        std::cout<<"Humano ingresa el saldo del cliente "<<cliente[id].nombre<<": ";
        std::cin>>tiempoAire;
        cliente[id].tiempoAire=cliente[id].tiempoAire+tiempoAire;
        std::cout<<"Humano deseas recargar mas tiempo aire a otros clientes preciona'c'\nO deseas ver la lista de los clientes y su tiempo aire y salir preciona 'cualquier otra letra'\n";
        std::cin>>opcion;
        if(opcion=='c'){
            goto regresa;
        }
    }
    std::cout<<"\nTIEMPO AIRE DE LOS CLIENTES\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Id:"<<i<<"|Nombre:"<<cliente[i].nombre<<"|Tiempo aire:"<<cliente[i].tiempoAire<<"\n";
    }
    
    system("pause");
    return 0;
}