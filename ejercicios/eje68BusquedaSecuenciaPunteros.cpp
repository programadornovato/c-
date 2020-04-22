/*
Crear la función “pedirDatos” donde se le pida al humano que ingrese x cantidad de números.
Crear una función “pedirNumero” que pida al humano un número.
Crear la función “buscarDatos” busque el número en la lista de números.
Mostrar si fue encontrado el numero o no.
Nota: Usar punteros y arreglos dinámicos.
*/
#include <iostream>
#include <stdlib.h>
int *numeros,cantidadNumeros,numeroBuscar;
void pedirDatos();
void pedirNumero();
void buscarDatos();
int main(){
    pedirDatos();
    pedirNumero();
    buscarDatos();
    delete[] numeros;
    system("pause");
    return 0;
}
void pedirDatos(){
    std::cout<<"Humano cuantos numeros va a tener tu arreglo:";
    std::cin>>cantidadNumeros;
    numeros=new int[cantidadNumeros];
    for (int i = 0; i < cantidadNumeros; i++)
    {
        std::cout<<"Numero "<<i+1<<": ";
        std::cin>>*(numeros+i);
    }
}
void pedirNumero(){
    std::cout<<"Humano que numero quieres buscar de tu arreglo:";
    std::cin>>numeroBuscar;
}
void buscarDatos(){
    bool encontrado=false;
    int i=0;
    while (i<cantidadNumeros && encontrado==false)
    {
        if(*(numeros+i)==numeroBuscar){
            encontrado=true;
        }
        i++;
    }
    if (encontrado==true)
    {
        std::cout<<"Humano felicidades el numero "<<numeroBuscar<<" si se encuentra en el arreglo.Ahora dame la patita :)\n";
    }
    else{
        std::cout<<"Humano tonto, el numero "<<numeroBuscar<<" no esta en la lista \n";
    }    
}