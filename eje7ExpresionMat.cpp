#include <iostream>
#include <math.h>
int main(){
    float x,y,res;
    std::cout<<"Humano digita lo que se te pida \n";
    std::cout<<"Valor de x: ";std::cin>>x;
    std::cout<<"Valor de y: ";std::cin>>y;
    res=(sqrt(x)) / (pow(x,2)-1);
    std::cout<<"Aqui esta tu chingadera de resultado: "<<res<<"\n";
    system("pause");
    return 0;
}