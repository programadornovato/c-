/*
Declarar un arreglo de números y a inicializar.
Declaramos un puntero.
Asignamos nuestro arreglo de números a nuestro puntero.
Mostramos el número y su posición de memoria.

*/
#include <iostream>

int main(){
    int numeros[]={1,2,3,4,5},*dir_numeros;
    dir_numeros=numeros;
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"El numero: "<<numeros[i]<<" esta en la direccion de memoria: "<<dir_numeros++<<"\n";
    }
    
    system("pause");
    return 0;
}