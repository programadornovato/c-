/*
Programa que pida un número entero n.
Validar que el número n sea mayor a 1.
Bucle que genere una serie fibonacci de 1 hasta n.
1 1 2 3 5 8 13 21 34...n
*/
#include <iostream>

int main(){
    int n,x=0,y=1,z=0;
    do
    {
        std::cout<<"Humano, digita un numero mayor a 1: ";
        std::cin>>n;
    } while (n<1);
    std::cout<<"1 ";
    for (int i = 1; i <= n; i++)
    {
        z=x+y;
        std::cout<<z<<" ";
        x=y;
        y=z;
    }
    std::cout<<"\n";
    system("pause");
    return 0;
}