#include <iostream>

int main(){
    float a,b,res;
    std::cout<<"Humano, por favor ingresa los iguiente:\n";
    std::cout<<"valor a:";std::cin>>a;
    std::cout<<"valor b:";std::cin>>b;
    //exp,raiz,*,/,+,-
    res=(a/b)+1;
    std::cout.precision(3);
    //1.83333
    std::cout<<"\nHumano, aqui esta tu piche resultado:"<<res<<"\n";
    system("pause");
    return 0;
}