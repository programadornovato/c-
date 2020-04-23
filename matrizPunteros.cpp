/*
**matriz   ->   *fila  ->[int]  [int]  [int]
				*fila  ->[int]  [int]  [int]
				*fila  ->[int]  [int]  [int]
Crear la función “pedirDatos” donde llenaremos la matriz.
Crear la función “mostrarDatos” donde mostraremos la matriz.
*/
#include <iostream>
#include <stdlib.h>
int **matriz,filas,columnas;
void pedirDatos();
void mostrarDatos();
int main(){
    pedirDatos();
    mostrarDatos();
    for (int i = 0; i < filas; i++)
    {
        delete [] matriz[i];
    }
    delete [] matriz;
    system("pause");
    return 0;
}
void pedirDatos(){
    std::cout<<"Humano cuantas filas va a tener tu matriz: ";
    std::cin>>filas;
    std::cout<<"Humano cuantas columnas va a tener tu matriz: ";
    std::cin>>columnas;
    matriz=new int*[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i]=new int[columnas];
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<"matriz["<<i+1<<"]["<<j+1<<"]:";
            std::cin>>*(*(matriz+i)+j);
        }
    }
}
void mostrarDatos(){
    std::cout<<"\nMATRIZ\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<*(*(matriz+i)+j)<<" ";
        }
        std::cout<<"\n";
    }
}