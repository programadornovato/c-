#include <iostream>
int main(){
    int matriz[100][100],filas,columnas;
    std::cout<<"Humano, por favor ingresa cuantas filas tendra tu matriz: ";
    std::cin>>filas;
    std::cout<<"Humano, por favor ingresa cuantas columnas tendra tu matriz: ";
    std::cin>>columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<"Humano ingresa el valor de la posision "<<i+1<<","<<j+1<<" : ";
            std::cin>>matriz[i][j];
        }
        
    }
    std::cout<<"\n\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n\n";
    
    

    system("pause");
    return 0;
}