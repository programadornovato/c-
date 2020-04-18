/*
1+2+3+5+8+13+21+34...n
Pedir al humano un número positivo, en caso de que el número ingresado sea menor a 1 ofender al humano y obligarlo a ingresar de nuevo el número.
Crear una función recursiva que genere una Serie Fibonacci a partir del número ingresado.
*/
#include <iostream>
int fibonacci(int numero);
int main(){
    int n;
    regresa:
    std::cout<<"Humano ingresa un numero mayor o igual a 1: ";
    std::cin>>n;
    if(n<1){
        std::cout<<"Humano tonto el numero que "<<n<<" no es mayor a 1 intenta de nuevo\n";
        goto regresa;
    }
    for (int i = 2; i <= n+1; i++)
    {
        std::cout<<fibonacci(i)<<" , ";
    }
    std::cout<<"\n";
    system("pause");
    return 0;
}
int fibonacci(int numero){
    if(numero<=1){
        return numero;
    }else
    {
        return fibonacci(numero-1)+fibonacci(numero-2);
    }
}