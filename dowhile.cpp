#include <iostream>

int main(){
    char letra;
    do
    {
        std::cout<<"Humano, preciona la letra a: ";
        std::cin>>letra;
    }while (letra=='a');
    std::cout<<"Humano estupido te dije que precionaras la letra a\n";
    system("pause");
    return 0;
}