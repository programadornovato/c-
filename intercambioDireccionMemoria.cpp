/*
Pedir al humano dos números de tipo float llamados “numero1” y “numero2”.
Crear un función llamada “intercambio” que reciba las direcciones de memoria de los dos números.
La función intercambio coloca el valor del “numero1“ en el “numero2“ y el “numero2“ en el “numero1“.
Mostrar los números.
*/
#include <iostream>
void pedirDatos(float& numero1,float& numero2);
void mostrarDatos(float numero1,float numero2);
void intercambioDatos(float *numero1,float *numero2);
int main(){
    float numero1,numero2;
    pedirDatos(numero1,numero2);
    std::cout<<"\n\nNUMEROS ORIGINALES\n";
    mostrarDatos(numero1,numero2);
    intercambioDatos(&numero1,&numero2);
    std::cout<<"\n\nNUMEROS INTERCAMBIADOS\n";
    mostrarDatos(numero1,numero2);
    system("pause");
    return 0;
}
void pedirDatos(float& numero1,float& numero2){
    std::cout<<"Humano ingresa el numero 1: ";std::cin>>numero1;
    std::cout<<"Humano ingresa el numero 2: ";std::cin>>numero2;
}
void mostrarDatos(float numero1,float numero2){
    std::cout<<"Numero 1:"<<numero1<<" direccion de memoria:"<<&numero1<<"\n";
    std::cout<<"Numero 2:"<<numero2<<" direccion de memoria:"<<&numero2<<"\n";
}
void intercambioDatos(float *dirNumero1,float *dirNumero2){
    float aux;
    aux=*dirNumero1;
    *dirNumero1=*dirNumero2;
    *dirNumero2=aux;
}