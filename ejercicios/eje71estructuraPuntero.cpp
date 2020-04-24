/*
Crear la estructura para 3 “Empleados”.
Crear la función “pedirDatos” donde se pida el nombre, edad y salario de los 3 empleados.
Crear la función “elMayor”  donde nos muestre el empleado de mayor edad.
*/
#include <iostream>
struct Empleados
{
    char nombre[30];
    float salario;
    int edad;
}empleado[3],*empleadoPuntero=empleado;
void pedirDatos();
void elMayor();
int main(){
    pedirDatos();
    elMayor();
    system("pause");
    return 0;
}
void pedirDatos(){
    std::cout<<"Humano ingresa la informacion de estos 3 empleados:\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout<<"Nombre "<<i+1<<":";
        std::cin>>(empleadoPuntero+i)->nombre;
        std::cout<<"Salario "<<i+1<<":";
        std::cin>>(empleadoPuntero+i)->salario;
        std::cout<<"Edad "<<i+1<<":";
        std::cin>>(empleadoPuntero+i)->edad;
    }
    
}
void elMayor(){
    int mayor=0,pos=0;
    for (int i = 0; i < 3; i++)
    {
        if((empleadoPuntero+i)->edad>mayor){
            mayor=(empleadoPuntero+i)->edad;
            pos=i;
        }
    }
    std::cout<<"\nHumano este es el empledo de mayor edad:\n";
    std::cout<<"Nombre:"<<(empleadoPuntero+pos)->nombre<<"\n";
    std::cout<<"Salario:"<<(empleadoPuntero+pos)->salario<<"\n";
    std::cout<<"Edad:"<<(empleadoPuntero+pos)->edad<<"\n";
}