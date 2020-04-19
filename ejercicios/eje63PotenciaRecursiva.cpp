/*
Pedir al humano un número base y  un exponente (ambos positivos), 
en caso de que el alguno de los números ingresado sea menor a 1 ofender al humano y obligarlo a ingresar de nuevo el número.
Crear una función recursiva que eleve el número base a la potencia del exponente.
*/
#include <iostream>
int potencia(int base,int exponente);
int main(){
    int base,exponente;
    regresoBase:
    std::cout<<"Humano ingresa un numero base mayor a 1:";std::cin>>base;
    if(base<1){
        std::cout<<"Humano tonto ingresa un numero mayor o igual a 1.\n";
        goto regresoBase;
    }
    regresoExponente:
    std::cout<<"Humano ingresa un numero exponente mayor a 1:";std::cin>>exponente;
    if(exponente<1){
        std::cout<<"Humano tonto ingresa un numero mayor o igual a 1.\n";
        goto regresoExponente;
    }
    std::cout<<"Humano aqui esta tu pinch.. resultado: "<<potencia(base,exponente)<<"\n";
    system("pause");
    return 0;
}
int potencia(int base,int exponente){
    int pot=0;
    if(exponente==1){
        pot=base;
    }else{
        pot=base*potencia(base,exponente-1);
    }
    return pot;
}