/*
Declara una matriz de 3x3 llamada matriz.
Pedir al humano que ingrese los datos de la matriz.
Comprobar que la matriz ingresada sea simétrica o no.
|2  5  9|           |2  5  9|
|5  8 -1|     ->    |5  8 -1|
|9 -1 10|           |9 -1 10|
*/
#include <iostream>

const int F=3,C=3;
void llenaMatriz(int m[][C]);
bool compruebaSimetriaMatriz(int m[][C]);
int main(){
    int matriz[F][C];
    regresa:
    llenaMatriz(matriz);
    bool simetrica=compruebaSimetriaMatriz(matriz);
    if(simetrica==true){
        std::cout<<"Felicidades tu matriz es simetrica.\n";
    }
    else{
        std::cout<<"Humano tonto tu matriz no es simetrica ingresala de nuevo.\n";
        goto regresa;
    }
    system("pause");
    return 0;
}
void llenaMatriz(int m[][C]){
    std::cout<<"Humano ingresa los adatos de la matriz simetrica:\n";
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            std::cout<<"matriz["<<i+1<<"]["<<j+1<<"]: ";
            std::cin>>m[i][j];
        }   
    }
}
bool compruebaSimetriaMatriz(int m[][C]){
    bool simetrica=true;
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if(m[i][j]!=m[j][i]){
                simetrica=false;
                break;
                break;
            }
        }
    }
    return simetrica;
}