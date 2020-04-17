/*
Declara una estructura llamada Empleado.
Crear la función “pedirDatos” que pida los datos del empleado.
Crear la función “mostraraDatos” que muestre los datos del empleado.
*/
#include <iostream>
struct Empleado
{
    int numeroEmpleado;
    char nombre[50];
}e1;
void pedirDatos(Empleado& e);
void mostrarDatos(Empleado& e);
int main(){
    pedirDatos(e1);
    mostrarDatos(e1);
    system("pause");
    return 0;
}
void pedirDatos(Empleado& e){
    std::cout<<"Humano ongresa los datos del empleado\n";
    std::cout<<"Numero de empleado: ";std::cin>>e.numeroEmpleado;
    std::cout<<"Nombre del empleado: ";std::cin>>e.nombre;
}
void mostrarDatos(Empleado& e){
    std::cout<<"DATOS DEL EMPLEADO\n";
    std::cout<<"Numero del empleado: "<<e.numeroEmpleado<<"\n";
    std::cout<<"Nombre: "<<e.nombre<<"\n";
}