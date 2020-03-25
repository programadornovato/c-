/*
Programa que pida un número entero n.
Validar que el número n sea mayor a 1.
El programa hará un ciclo que sume los números 1+2+3 hasta n.
*/
#include <iostream>

int main(){
    int numero,suma=0;
    do
    {
        std::cout<<"Humano, porfavor ingresa un numero mayor a 1: ";
        std::cin>>numero;
    } while (numero<=1);
    for (int i = 1; i <= numero; i++)
    {
        suma=suma+i;
        std::cout<<i<<"+";
    }
    std::cout<<"\nAqui esta tu pinche suma: "<<suma<<"\n";
    system("pause");
    return 0;
}