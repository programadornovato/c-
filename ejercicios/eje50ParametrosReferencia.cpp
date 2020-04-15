#include <iostream>
void cambaValor(int&,int&);
int main(){
    int num1;
    int num2;
    std::cout<<"Humano ingresa el valor de num1:";
    std::cin>>num1;
    std::cout<<"Humano ingresa el valor de num2:";
    std::cin>>num2;
    std::cout<<"NUMEROS INGRESADOS\n";
    std::cout<<"num1:"<<num1<<"\n";
    std::cout<<"num2:"<<num2<<"\n";

    cambaValor(num1,num2);
    std::cout<<"\nNUMEROS CAMBIADOS\n";
    std::cout<<"num1:"<<num1<<"\n";
    std::cout<<"num2:"<<num2<<"\n";

    system("pause");
    return 0;
}
void cambaValor(int& val1,int& val2){
    val1=10;
    val2=20;
    return 
}
