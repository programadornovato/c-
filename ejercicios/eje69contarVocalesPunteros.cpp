/*
Crear la función “pedirNombre” donde se le pida al humano que ingrese un nombre.
Crear una función “contarVocales” que reciba un char de tipo puntero.
Mostrar la cantidad de vocales.
Nota: Usar punteros y arreglos dinámicos.
*/
#include <iostream>
#include <string.h>
void pedirNombre(char *nombre);
int contarVocales(char *nombre);
int main(){
    char nombre[30];

    pedirNombre(nombre);
    int contVocales=contarVocales(nombre);
    std::cout<<"Humano el nombre "<<nombre<<" tiene "<<contVocales<<" vocales.\n";
    system("pause");
    return 0;
}
void pedirNombre(char *nombre){
    std::cout<<"Humano ingresa tu nombre: ";
    std::cin>>nombre;
}
int contarVocales(char *nombre){
    strupr(nombre);
    int contador=0;
    while (*nombre)//*nombre!=null
    {
        switch (*nombre)
        {
            case 'A':contador++;break;
            case 'E':contador++;break;
            case 'I':contador++;break;
            case 'O':contador++;break;
            case 'U':contador++;break;
        }
        nombre++;
    }
    return contador;
}