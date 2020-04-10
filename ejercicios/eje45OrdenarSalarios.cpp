/**
Crear una estructura con nombre y salario del empleado.
Inicializar nombre del empleado.
Pedir al humano que ingrese el salario de cada empleado.
Ordenar los salarios de menor a mayor.
Mostrar los salarios.
*/
#include <iostream>
#include <string.h>

struct Empleados
{
    char nombre[50];
    float salario;
}empleado[3]={{"Juana"},{"Maria"},{"Pepe"}};

int main(){
    char auxNombre[50];
    float auxSalario;
    std::cout<<"Humano ingresa los salrios que se te piden a continuacion: \n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Salario del empleado "<<empleado[i].nombre<<": ";
        std::cin>>empleado[i].salario;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (empleado[j].salario>empleado[j+1].salario)
            {
                strcpy(auxNombre,empleado[j].nombre);
                auxSalario=empleado[j].salario;

                strcpy(empleado[j].nombre,empleado[j+1].nombre);
                empleado[j].salario=empleado[j+1].salario;

                strcpy(empleado[j+1].nombre,auxNombre);
                empleado[j+1].salario=auxSalario;
            }
        }
    }
    std::cout<<"\nSALARIOS ORDENADOS DE MENOR A MAYOR\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"El empleado "<<empleado[i].nombre<<" gana "<<empleado[i].salario<<"\n";
    }
    
    system("pause");
    return 0;
}
