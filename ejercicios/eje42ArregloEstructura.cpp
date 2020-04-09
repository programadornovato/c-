/*
Crear un arreglo de estructuras con id y nombre para 2 empleados.
Pedirle al humano que ingrese los datos del empleado.
Validar que el id contenga sólo números y que sea tenga 6 dígitos.
*/
#include <iostream>

struct Empleados
{
    char id[6];
    char nombre[60];
}empleado[2];

int main(){
    bool esNumero=true;
    std::cout<<"Humano ingresa los datos de los empleados (el id debe contener 6 numeros)\n";
    for (int i = 0; i < 2; i++)
    {
        regresa:
        esNumero=true;
        std::cout<<"Empleado "<<i+1<<" id:";std::cin>>empleado[i].id;
        for (int j = 0; j < 6; j++)
        {
            if( int(empleado[i].id[j])<=47 || int(empleado[i].id[j])>=58 ){
                esNumero=false;
                std::cout<<"Humano estupido el id "<<empleado[i].id<<" no es valido intenta de nuevo.\n";
                goto regresa;
            }
        }
        std::cout<<"Empleado "<<i+1<<" nombre:";std::cin>>empleado[i].nombre;
    }
    std::cout<<"\n";
    for (int i = 0; i < 2; i++)
    {
        std::cout<<"Id: "<<empleado[i].id<<"\n";
        std::cout<<"Nombre: "<<empleado[i].nombre<<"\n";
        std::cout<<"\n";
    }
    system("pause");
    return 0;
}