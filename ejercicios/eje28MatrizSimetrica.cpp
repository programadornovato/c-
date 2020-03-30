/*
Pedir al humano que ingrese el tamaño de la matrizA y la matrizB.
Pedir al humano que ingrese los datos de la matrizA y la matrizB.
Comprobar si la matrizA es simétrica con la matrizB.
Mostrar si las matrices son simétricas a no.
*/
#include <iostream>
int main(){
    int filMatrizA,colMatrizA,filMatrizB,colMatrizB;
    inicio:
    std::cout<<"Humano ingresa las medidas de la matriz A: ";
    std::cin>>filMatrizA>>colMatrizA;
    std::cout<<"Humano ingresa las medidas de la matriz B: ";
    std::cin>>filMatrizB>>colMatrizB;
    if(filMatrizA==colMatrizA && filMatrizB==colMatrizB && filMatrizA==filMatrizB){
        int matrizA[filMatrizA][colMatrizA],matrizB[filMatrizB][colMatrizB];
        llenarDenuvoMatriz:
        for (int i = 0; i < filMatrizA; i++)
        {
            for (int j = 0; j < colMatrizA; j++)
            {
                std::cout<<"Ingresa los datos de la matriz A en la pocicion ["<<i+1<<"]["<<j+1<<"]: ";
                std::cin>>matrizA[i][j];
            }
            
        }
        for (int i = 0; i < filMatrizB; i++)
        {
            for (int j = 0; j < colMatrizB; j++)
            {
                std::cout<<"Ingresa los datos de la matriz B en la pocicion ["<<i+1<<"]["<<j+1<<"]: ";
                std::cin>>matrizB[i][j];
            }
        }
        for (int i = 0; i < filMatrizA; i++)
        {
            for (int j = 0; j < colMatrizA; j++)
            {
                if(matrizA[i][j]!=matrizB[j][i]){
                    std::cout<<"Humano estupido tu matriz A y B no son simetricas intenta de nuevo \n";
                    goto llenarDenuvoMatriz;
                }
            }
            
        }
    }
    else{
        std::cout<<"Humano estupido tu matriz A y B no son cuadradas intenta de nuevo \n";
        goto inicio;
    }
    std::cout<<"¡¡¡¡Felicidades humano bien jugado hdp !!!";
    system("pause");
    return 0;
}