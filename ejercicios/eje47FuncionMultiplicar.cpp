/*
Crear una función que le pida al humano 2 números enteros positivos.
Crear una función que reciba 2 números y retorne el resultado.
Crear una función que reciba 2 números y muestre el resultado.
Llamar las funciones multiplicación, retornar y mostrar el resultado a nuestra función principal.
*/
#include <iostream>
int dato1,dato2;

void pideDatos();
int retornaMultiplicacion(int a, int b);
void muestraMultiplicacion(int a,int b);


int main(){
    int resultado;
    pideDatos();
    resultado=retornaMultiplicacion(dato1, dato2);
    std::cout<<"El resultado es: "<<resultado<<"\n";
    muestraMultiplicacion(dato1,dato2);
    system("pause");
    return 0;
}


void pideDatos(){
    regresar:
    std::cout<<"Humano ingresa 2 numero enteros positivos\n";
    std::cout<<"Dato 1: ";
    std::cin>>dato1;
    if(dato1<0){
        std::cout<<"Humano estupido te estoy pidiendo datos positivos\n";
        goto regresar;
    }
    std::cout<<"Dato 2: ";
    std::cin>>dato2;
    if(dato2<0){
        std::cout<<"Humano estupido te estoy pidiendo datos positivos\n";
        goto regresar;
    }
}
int retornaMultiplicacion(int a, int b){
    /*
    int resultado;
    resultado=a*b;
    return resultado;
    */
   return a*b;
}
void muestraMultiplicacion(int a,int b){
    int resultado;
    resultado=a*b;
    std::cout<<"Humano este es el resultado de la multiplicacion:"<<resultado<<"\n";
}

