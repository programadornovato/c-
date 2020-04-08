/*
Crear la estructura de la dirección.
Crear la estructura del empleados y de clientes.
Anidar la estructura de la dirección en las estructuras de empleados y clientes.
Pedir y mostrar la información de empleados y clientes.
*/
#include <iostream>

struct Direccion
{
    char pais[65];
    char estado[65];
    char municipio[65];
    int calle;
};
struct Empleados
{
    char nombre[65];
    char id[6];
    struct Direccion dirEmpleado;
}
e1={"eugenio","54554","Mexico","Edo Mex","Atlacomulco",12},
e2={"juan","54555","Mexico","Edo Mex","Jocotitlan",12};

struct Cliente
{
    char nombre[65];
    char telefono[12];
    struct Direccion dirCliente;
}c1,c2;

int main(){
    std::cout<<"EMPLEADO 1\nNombre: "<<e1.nombre<<"\nid: "<<e1.id<<"\nPais: "<<e1.dirEmpleado.pais<<"\n\n";
    std::cout<<"EMPLEADO 2\nNombre: "<<e2.nombre<<"\nid: "<<e2.id<<"\nPais: "<<e2.dirEmpleado.pais<<"\n\n";

    std::cout<<"CLIENTE 1\nNombre: ";std::cin>>c1.nombre;
    std::cout<<"Telefono: ";std::cin>>c1.telefono;
    std::cout<<"Pais: ";std::cin>>c1.dirCliente.pais;

    std::cout<<"\nCLIENTE 2\nNombre: ";std::cin>>c2.nombre;
    std::cout<<"Telefono: ";std::cin>>c2.telefono;
    std::cout<<"Pais: ";std::cin>>c2.dirCliente.pais;

    std::cout<<"\n\nCLIENTE 1\nNombre: "<<c1.nombre<<"\nTelefono: "<<c1.telefono<<"\nPais: "<<c1.dirCliente.pais;
    std::cout<<"\nCLIENTE 2\nNombre: "<<c2.nombre<<"\nTelefono: "<<c2.telefono<<"\nPais: "<<c2.dirCliente.pais<<"\n\n";

    system("pause");
    return 0;
}