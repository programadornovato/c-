#include <iostream>

int main(){
    int arreglo[100],tamano,mayor=0;
    do
    {
        std::cout<<"Ingresa el tamaño del arreglo: ";
        std::cin>>tamano;
    } while ( (tamano<1) || (tamano>100) );
    for (int i = 0; i < tamano; i++)
    {
        std::cout<<"Ingresa el valor del elemento "<<(i+1)<<": ";
        std::cin>>arreglo[i];// 1 2 5 4 3
    }
    for (int i = 0; i < tamano; i++)
    {
        if(arreglo[i]>mayor){
            mayor=arreglo[i];
        }
    }
    std::cout<<"\n Humano este es tu numero mayor "<<mayor<<"\n";
    

    system("pause");
    return 0;
}