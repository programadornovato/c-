/*
Pedir al humano que ingresar 5 números.
Ordenar los números.
Mostrar los números de forma ascendente.
Mostrar los números de forma descendente.
Sin burbuja mejorado=20 ciclos
*/
#include <iostream>

int main(){
    int numeros[5],aux,ciclos=0;
    bool ordenado=false;
    std::cout<<"Humano inresa 5 numeros (en el pinche orden que quieras):\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Ingresa el numero "<<i+1<<": ";
        std::cin>>numeros[i];
    }
    for (int i = 0; i < 5 && ordenado==false; i++)
    {
        ordenado=true;
        for (int j = 0; j < 4; j++)
        {
            if(numeros[j]>numeros[j+1]){
                ordenado=false;
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
            ciclos++;
        }
    }
    std::cout<<"Humano aqui estan tus pinches numeros (ordenados de forma acedente) en " <<ciclos<< " ciclos:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<numeros[i]<<"\n";
    }
    std::cout<<"Humano aqui estan tus pinches numeros (ordenados de forma decendente) en " <<ciclos<< " ciclos:\n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout<<numeros[i]<<"\n";
    }

    system("pause");
    return 0;
}