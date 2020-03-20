#include <iostream>

int main(){
    int numero;
    std::cout<<"Humano porfavor ingresa un numero entero: ";
    std::cin>>numero;
    if(numero%2==0){
        std::cout<<"Tu pinche numero "<<numero<<" es par\n";
    }
    else{
        std::cout<<"Tu pinche numero "<<numero<<" es impar\n";
    }
    system("pause");
    return 0;
}