/*
Programa que pida al humano que digite  un número entre 1 y 10 
y que valide que este dentro el rango de 1 y 10.

Mostrar los múltiplos de  de ese número del 1 al 10.
*/
#include<iostream>

int main(){
    int numero;
    do{
        std::cout<<"A ver humano, digita un numero entre 1 y 10: ";
        std::cin>>numero;
        if(numero<1 || numero>10){
            std::cout<<"Humano estupido te dije que digitaras un numero entre 1 y 10.\n";
        }
    }while(numero<1 || numero>10);
    std::cout<<"\n\n";
    for (int i = 1; i <= 10; i++)
    {
        std::cout<<i<<" x "<<numero<<"="<<i*numero<<"\n";
    }
    
    system("pause");
    return 0;
}