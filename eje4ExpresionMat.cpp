#include <iostream>

int main(){
    float a,b,c,d,e,f,res;
    std::cout<<"Humano ingresa los valores numericos que se te pida\n";
    std::cout<<"Valor a: ";std::cin>>a;
    std::cout<<"Valor b: ";std::cin>>b;
    std::cout<<"Valor c: ";std::cin>>c;
    std::cout<<"Valor d: ";std::cin>>d;
    std::cout<<"Valor e: ";std::cin>>e;
    std::cout<<"Valor f: ";std::cin>>f;

    res=(a+(b/c)) / (d+(e/f));

    std::cout<<"\nHumano aqui esta tu piche resultado: "<<res<<"\n";

    system("pause");
    return 0;
}