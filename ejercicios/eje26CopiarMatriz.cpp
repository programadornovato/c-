#include <iostream>

int main(){
    int matriza[100][100],matrizb[100][100],filas,columnas;
    std::cout<<"Humano ingresa la catidad de filas y columnas de tu matriz : ";
    std::cin>>filas>>columnas;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<"Humano ingresa la pocicion ["<<i+1<<"]["<<j+1<<"]: ";
            std::cin>>matriza[i][j];
        }
        
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizb[i][j]=matriza[i][j];
        }
        
        
    }
    std::cout<<"\n\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout<<matrizb[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n\n";

    system("pause");
    return 0;
}