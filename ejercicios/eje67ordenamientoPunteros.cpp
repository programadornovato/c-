/*
Pedir al humano que ingrese x cantidad de números en un arreglo dinámico.
Crear la función ordenar que ordene los números ingresados por el humano.
Mostrar los números ordenados.
*/
#include <iostream>
#include <stdlib.h>
int cantidadNumeros,*numeros;
void pedirDatos();
void ordenarDatos();
void mostrarDatos();
int main(){
    pedirDatos();
    ordenarDatos();
    std::cout<<"\n\nHumano aqui estan tus pinch... datos ordenados:\n";
    mostrarDatos();
    delete[] numeros;
    system("pause");
    return 0;
}
void pedirDatos(){
    std::cout<<"Humano cuantos datos vas a ordenar:";
    std::cin>>cantidadNumeros;
    numeros=new int[cantidadNumeros];
    for (int i = 0; i < cantidadNumeros; i++)
    {
        std::cout<<"Numero "<<i+1<<":";
        std::cin>>*(numeros+i);
    }
}
void ordenarDatos(){
    int aux;
    for (int i = 0; i < cantidadNumeros; i++)
    {
        for (int j = 0; j < cantidadNumeros-1; j++)
        {
            if(*(numeros+j)>*(numeros+j+1)){
                aux=*(numeros+j);
                *(numeros+j)=*(numeros+j+1);
                *(numeros+j+1)=aux;
            }
        }
    }    
}
void mostrarDatos(){
    for (int i = 0; i < cantidadNumeros; i++)
    {
        std::cout<<"Numero "<<i+1<<":"<<*(numeros+i)<<"\n";
    }
}