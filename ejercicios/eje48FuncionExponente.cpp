/*
Crear una función llamada “pedirDatos” que le pida al humano 2 números de coma flotante positivos mayores a 0.
Crear una función llamada “retornaExponente” que reciba 2 números y retorne el primer número elevado al exponente del segundo.
Crear una función llamada “muestraExponente” que reciba 2 números y muestre el primer número elevado al exponente del segundo.
Llamar las funciones “pedirDatos”, “retornaExponente” y “muestraExponenete” el resultado a nuestra función principal.
*/
#include <iostream>
float numero,elevar;
void pedirDatos();
float retornaExponente(float valor,float exponente);
void muestraExponente(float valor,float exponente);
int main(){
    pedirDatos();
    long resultado=retornaExponente(numero,elevar);
    std::cout<<"El resultado es: "<<resultado<<"\n";
    muestraExponente(numero,elevar);
    system("pause");
    return 0;
}
void pedirDatos(){
    std::cout<<"Humano ingresa el numero: ";
    std::cin>>numero;
    std::cout<<"Humano ingresa el exponente: ";
    std::cin>>elevar;
}
float retornaExponente(float valor,float exponente){
    long resultado=1;
    for (int i = 1; i <= exponente; i++)
    {
        resultado=resultado*valor;
    }
    return resultado;
}
void muestraExponente(float valor,float exponente){
    long resultado=retornaExponente(valor,exponente);
    std::cout<<"El resultado es: "<<resultado<<"\n";
}