/*
Crear una estructura de un empleado con un puntero.
Crear la función “pedirDatos” donde se le pida al humano que ingrese el nombre del empleado.
Crear una función “mostrarDatos” muestre los datos del empleado.
*/
#include <iostream>
struct Empleados
{
    char nombre[30];
    int edad;
}empleado,*punteroEmpleado=&empleado;
void pedirDatos();
void mostrarDatos();
int main(){
    pedirDatos();
    mostrarDatos();
    system("pause");
    return 0;
}
void pedirDatos(){
    std::cout<<"Humano ingresa los siguientes datos del empleado.\n";
    std::cout<<"Nombre: ";std::cin>>punteroEmpleado->nombre;
    std::cout<<"Edad: ";std::cin>>punteroEmpleado->edad;
}
void mostrarDatos(){
    std::cout<<"\n\nDATOS DEL EMPLEADO\n";
    std::cout<<"Nombre: "<<punteroEmpleado->nombre<<"\n";
    std::cout<<"Edad: "<<punteroEmpleado->edad<<"\n";
}