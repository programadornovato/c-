/*
Pedir al humano que ingrese números en un vector.
Crear una función llamada “cuadrado” que reciba el vector.
La función “cuadrado” eleve al cuadrado los números del vector.
Crear una función que muestre los valores del vector.
*/
#include <iostream>
void cuadrado(int vector[]);
void mostrarCuadrado(int vector[]);
const int TAM=5;
int main(){
    int vec[TAM];
    std::cout<<"Humano ingresa los "<<TAM<<" numero del vector\n";
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<"Numero "<<i+1<<": ";std::cin>>vec[i];
    }
    cuadrado(vec);
    std::cout<<"ESTOS SON TUS NUMERO AL CUADRADO\n";
    mostrarCuadrado(vec);
    system("pause");
    return 0;
}
void cuadrado(int vector[]){
    for (int i = 0; i < TAM; i++)
    {
        vector[i]=vector[i]*vector[i];
    }
}
void mostrarCuadrado(int vector[]){
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<"Numero "<<i+1<<" "<<vector[i]<<"\n";
    }
}