#include <iostream>

int suma(int a,int b);

int main(){
    int resultado,valorA,valorB;
    std::cout<<"Humano ingresa el valor de a:";
    std::cin>>valorA;
    std::cout<<"Humano ingresa el valor de b:";
    std::cin>>valorB;
    resultado=suma(valorA,valorB);
    std::cout<<"Resultado:"<<resultado<<"\n";
    system("pause");
    return 0;
}
int suma(int valA,int valB){
    int res;
    res=valA+valB;
    return res;
}