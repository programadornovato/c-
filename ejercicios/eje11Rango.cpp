#include <iostream>

int main(){
    int edad;
    std::cout<<"Escribe la edad del candidato: ";
    std::cin>>edad;
    if(edad >=18 &&  edad <= 40){
        std::cout<<"El humano es apto para trabajar en la empres\n";
    }else{
        std::cout<<"El humano no es apto para trabajar en la empresa\n";
    }
    system("pause");
    return 0;
}