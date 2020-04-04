#include <iostream>

int main(){
    int numeros[5],aux,pos=0;
    std::cout<<"Humano ingresa los siguientes datos:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cin>>numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        pos=i;
        aux=numeros[i];
        while ( (pos>0) && (numeros[pos-1]>aux) )
        {
            numeros[pos]=numeros[pos-1];
            pos--;
        }
        numeros[pos]=aux;
    }
    std::cout<<"Humano aqui estan tus pinches numero ordenados de forma acendente:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numeros[i]<<"\n";
    }
    std::cout<<"Humano aqui estan tus pinches numero ordenados de forma decendente:\n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout<<numeros[i]<<"\n";
    }
    
    system("pause");
    return 0;
}