/*
Crear la función “pedirDatos” donde se le pida al humano que ingrese el tamaño de las matrices y sus datos.
Crear una función “sumarDatos” sume ambas.
Crear una función “mostrarDatos” muestre la suma de ambas matrices.
*/
#include <iostream>
#include <stdlib.h>
int **matriz1,**matriz2,filas,columnas;
void pedirDatos();
void sumaDatos();
void mostrarDatos();
int main(){
    pedirDatos();
    sumaDatos();
    mostrarDatos();
    system("pause");
    return 0;
}
void pedirDatos(){
    std::cout<<"Humano ingresa el tamaño de tu matriz\n";
    std::cout<<"Filas: ";std::cin>>filas;
    std::cout<<"Columnas: ";std::cin>>columnas;
    matriz1=new int*[filas];
    matriz2=new int*[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz1[i]=new int[columnas];
        matriz2[i]=new int[columnas];
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<"Matriz1["<<i+1<<"]["<<j+1<<"]:";
            std::cin>>*(*(matriz1+i)+j);
        }        
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<"Matriz2["<<i+1<<"]["<<j+1<<"]:";
            std::cin>>*(*(matriz2+i)+j);
        }        
    }   
}
void sumaDatos(){
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            *(*(matriz1+i)+j)=*(*(matriz1+i)+j)+*(*(matriz2+i)+j);
        }
    }
}
void mostrarDatos(){
    std::cout<<"\n\nSUMA DE LAS MATRICES\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<*(*(matriz1+i)+j)<<" ";
        }
        std::cout<<"\n";
    }
}