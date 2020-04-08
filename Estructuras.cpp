/*
Crea un programa:
Que almacene Nombre, dirección y teléfono de 3 empleados.
Pedir al humano que ingrese Nombre y dirección de 2 clientes.
*/
#include <iostream>

struct Empleados
{
    char nombre[65];
    char direccion[65];
    char telefono[15];
}
e1={"juan","argentina","646532154"},
e2={"maria","mexico","987654654987"},
e3={"pepe","chile","6546546654"};

struct Clientes
{
    char nombre[65];
    char direccion[65];
}c1,c2;


int main(){
    std::cout<<"EMPLEADO\n";
    std::cout<<"Nombre e1: "<<e1.nombre<<" Direccion: "<<e1.direccion<<" Telefono: "<<e1.telefono<<"\n";
    std::cout<<"Nombre e1: "<<e2.nombre<<" Direccion: "<<e2.direccion<<" Telefono: "<<e2.telefono<<"\n";
    std::cout<<"Nombre e1: "<<e3.nombre<<" Direccion: "<<e3.direccion<<" Telefono: "<<e3.telefono<<"\n";
    std::cout<<"\n\nCLIENTES\n";
    std::cout<<"Nombre c1: ";std::cin>>c1.nombre;
    std::cout<<"Direccion c1: ";std::cin>>c1.direccion;
    std::cout<<"Nombre c2: ";std::cin>>c2.nombre;
    std::cout<<"Direccion c2: ";std::cin>>c2.direccion;
    std::cout<<"\nNombre c1: "<<c1.nombre;
    std::cout<<" Direccion c1: "<<c1.direccion;
    std::cout<<"\nNombre c2: "<<c2.nombre;
    std::cout<<" Direccion c2: "<<c2.direccion<<"\n";
    system("pause");
    return 0;
}