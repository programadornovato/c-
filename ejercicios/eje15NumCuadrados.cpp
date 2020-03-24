#include <iostream>

int main(){
    int suma=0,cuadrado;

    for (int i = 1; i <= 10; i++)
    {
        cuadrado=i*i;
        suma=suma+cuadrado;
        std::cout<<"El cuadrado de "<<i<<"="<<cuadrado<<"\n";
    }
    std::cout<<"\n";
    std::cout<<"La suma de los cuadrados del 1 al 10 es "<<suma<<"\n";
    system("pause");
    return 0;
}