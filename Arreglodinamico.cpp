/*
Pedir al humano cantidad de calificaciones y guardarlo en cantidadCalificaciones.
Crear un arreglo de calificaciones con número de elementos igual a cantidadCalificaciones.
Ingresar las calificaciones.
Mostrar calificaciones y su dirección de memoria.
Borrar las direcciones de memoria, volver a pedir los datos y mostrarlos.
*/
#include <iostream>
#include <stdlib.h>
int *calificaciones,cantidadCalificaciones;
void pedirDatos();
void mostrarDatos();
int main(){
    pedirDatos();
    mostrarDatos();
    std::cout<<"\n\n_________________\n\n";
    delete[] calificaciones;
    pedirDatos();
    mostrarDatos();
    system("pause");
    return 0;
}
void pedirDatos(){
    std::cout<<"Cuantas calificaciones necesitas:";
    std::cin>>cantidadCalificaciones;
    calificaciones=new int[cantidadCalificaciones];
    for (int i = 0; i < cantidadCalificaciones; i++)
    {
        std::cout<<"Calificacion "<<i+1<<": ";
        std::cin>>calificaciones[i];
    }
}
void mostrarDatos(){
    for (int i = 0; i < cantidadCalificaciones; i++)
    {
        std::cout<<"Calificacion "<<i+1<<": "<<calificaciones[i]<<" - direccion memoria:"<<&calificaciones[i]<<"\n";
    }
    
}