#include <iostream>
int factorial(int numero);
int main(){
    int n;
    std::cout<<"Humano ingresa el numero al que se le va a sacar el factorial:";
    std::cin>>n;
    std::cout<<"Aqui esta tu pinche factorial de "<<n<<"="<<factorial(n)<<"\n";
    system("pause");
    return 0;
}
int factorial(int numero){
    if(numero==0){
        numero=1;
    }else{
        numero=numero*factorial(numero-1);
    }
    return numero;
}