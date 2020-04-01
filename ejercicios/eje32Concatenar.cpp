/*
Declarar 3 variables de tipo string.
Pedir al humano que ingrese nombre y apellido y guardarlos en el string 1 y 2.
Colocar los valores del string 1 y 2 en el string 3.
*/
#include <iostream>
#include <string.h>

int main(){
    char nombre[20],apellido[20],nombreApellido[40]={};
    std::cout<<"Humano ingresa tu nombre: ";
    std::cin>>nombre;
    std::cout<<"Humano ingresa tu apellido: ";
    std::cin>>apellido;
    strcat(nombreApellido,nombre);
    strcat(nombreApellido," ");
    strcat(nombreApellido,apellido);
    std::cout<<"Humano este es tu pinche nombre y apellido: "<<nombreApellido<<"\n";
    system("pause");
    return 0;
}
