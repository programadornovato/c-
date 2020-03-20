#include <iostream>

int main(){
    int n1,n2;
    std::cout<<"Humano, escribe dos numero\n ";
    std::cout<<"Numero 1: ";std::cin>>n1;
    std::cout<<"Numero 2: ";std::cin>>n2;
    if(n1==n2){
        std::cout<<"los dos numero son iguales\n";
    }
    else if(n1>n2){
        std::cout<<"el numero 1 es mayor\n";
    }
    else{
        std::cout<<"el numero 2 es mayor\n";
    }
    system("pause");
    return 0;
}