/*
Pedir al humano que ingrese dos valores.
Crear una función llamada "calculaRetorno" que reciba dos valores de tipo int y los sume y multiplique.
Hacer la la función “calculaRetorno” retorne un arreglo con la suma y la el resultado de la multiplicación.
*/
#include <iostream>
int *calculaRetorno(int,int);
int main(){
    int num1,num2,suma=0,multiplicacion=0;
    std::cout<<"Humano ingresa dos numeros\n";
    std::cout<<"Numero 1: ";std::cin>>num1;
    std::cout<<"Numero 2: ";std::cin>>num2;
    int *resultado=calculaRetorno(num1,num2);
    suma=resultado[0];
    multiplicacion=resultado[1];
    std::cout<<"El resultado de la suma es: "<<suma<<"\n";
    std::cout<<"El resultado de la nultiplicacion es: "<<multiplicacion<<"\n";
    system("pause");
    return 0;
}
int *calculaRetorno(int num1,int num2){
    int suma=num1+num2;
    int multiplicacion=num1*num2;
    int *resultado;
    resultado[0]=suma;
    resultado[1]=multiplicacion;
    return resultado;
}