#include <iostream>

int main(){
    int a,b,aux;
    std::cout<<"A ver humano, vas a escribir lo que se te pida:\n";
    std::cout<<"Valor de a: ";std::cin>>a;//10
    std::cout<<"Valor de b: ";std::cin>>b;//5
    aux=a;//aux=10
    a=b;//a=5
    b=aux;//b=10
    std::cout<<"\nHumano aqui estan tus piches valores intercambiados:\n";
    std::cout<<"Valor de a: "<<a<<"\n";
    std::cout<<"Valor de b: "<<b<<"\n";

    system("pause");
    return 0;
}