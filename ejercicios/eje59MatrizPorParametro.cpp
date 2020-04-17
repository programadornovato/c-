/*
Crear una matriz llamado “matriz” de 2 filas y 3 columnas e inicializarla.
Crear una función llamada “matrizMuestra” muestre los datos de la matriz.
Crear una función llamada “cuadradoMatriz” que reciba el vector y eleve al cuadrado cada uno de los elementos.
Mostrar la matriz elevada al cuadrado.
*/
#include <iostream>
const int NFILAS=2,NCOLUMNAS=3;
void matrizMuestra(int m[][NCOLUMNAS]);
void cuadradoMatriz(int m[][NCOLUMNAS]);
int main(){
    int matriz[NFILAS][NCOLUMNAS]=
    { 
        {1,2,3},
        {4,5,6} 
    };
    matrizMuestra(matriz);
    cuadradoMatriz(matriz);
    matrizMuestra(matriz);
    system("pause");
    return 0;
}
void matrizMuestra(int m[][NCOLUMNAS]){
    std::cout<<"HUMANO AQUI ESTA TU PINCHI MATRIZ\n";
    for (int i = 0; i < NFILAS; i++)
    {
        for (int j = 0; j < NCOLUMNAS; j++)
        {
            std::cout<<m[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}
void cuadradoMatriz(int m[][NCOLUMNAS]){
    for (int i = 0; i < NFILAS; i++)
    {
        for (int j = 0; j < NCOLUMNAS; j++)
        {
            m[i][j]=m[i][j]*m[i][j];
        }
    }
}