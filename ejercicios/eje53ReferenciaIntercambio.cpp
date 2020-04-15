/*
Pedir al humano que ingrese el número 1 y el número 2.
Crear una función llamada “intercambio” que reciba las variables “numero1” y “numero2” por referencia.
La función “intercambio” asignará el valor de “numero1” en “numero2” y al revés.
Mostrar al humano el valor de “numero1” y “numero2”.
*/
#include <iostream>

void intercambio(int&,int&);

int main(){
    int num1,num2;
    std::cout<<"Humano ingresa 2 numeros:\n";
    std::cout<<"Numero 1: ";std::cin>>num1;
    std::cout<<"Numero 2: ";std::cin>>num2;
    intercambio(num1,num2);
    std::cout<<"Estos son tus numeros intercambiados:\n";
    std::cout<<"Numero 1: "<<num1<<"\n";
    std::cout<<"Numero 2: "<<num2<<"\n";
    system("pause");
    return 0;
}

void intercambio(int& num1,int& num2){
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}
