#include <iostream>
#include <math.h>
int main(){
    float x,y,res,yCuadradaMenosUno;
    std::cout<<"Humano digita lo que se te pida \n";
    std::cout<<"Valor de x: ";std::cin>>x;
    ingresaYdeNuevo:
    std::cout<<"Valor de y: ";std::cin>>y;
    yCuadradaMenosUno=(pow(y,2)-1);
    if(yCuadradaMenosUno==0){
        std::cout<<"Humano estupido el valor de y no es valido ingresa de nuevo el valor de y\n";
        goto ingresaYdeNuevo;
    }
    res=(sqrt(x)) / yCuadradaMenosUno;
    std::cout<<"Aqui esta tu chingadera de resultado: "<<res<<"\n";
    system("pause");
    return 0;
}