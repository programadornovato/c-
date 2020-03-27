#include <iostream>

int main(){
    int numero[100],n;
    do
    {
        std::cout<<"Humano inresa la cantidad de elementos de tu arreglo (mas de 1 y menos de 100)";
        std::cin>>n;
    } while ( (n<1) || (n>100) );
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Humano ingresa el valor del elemento "<<(i+1)<<" : ";
        std::cin>>numero[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cout<<(i+1)<<"="<<numero[i]<<"\n";
    }
    system("pause");
    return 0;
}
