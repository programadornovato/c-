/*
Pedir al humano que ingrese un número PAR.
Almacenar la captura del número en un puntero.
Si el valor del puntero es PAR felicitar al humano, de lo contrario reprender al humano.
Mostrar la dirección de memoria del número.
*/
#include <iostream>

int main(){
    int numero,*dir_numero;
    std::cout<<"Humano ingresa un numero PAR:";std::cin>>numero;
    dir_numero=&numero;
    if(*dir_numero%2==0){
        std::cout<<"Felicidades humano el numero "<<*dir_numero<<" es PAR, ahora dame la patita.\n ";
    }
    else{
        std::cout<<"Humano tonto el numero "<<*dir_numero<<" es IMPAR.\n";
    }
    std::cout<<"Esta es tu pinch.. direccion de mememoria "<<dir_numero<<"\n";
    system("pause");
    return 0;
}