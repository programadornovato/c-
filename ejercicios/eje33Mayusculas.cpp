/*
Pedir al humano que ingrese un texto en minúsculas o en mayúsculas.
Pedir al humano que otro texto similar al anterior.
Si no es la misma palabra regañar 😈 al humano de lo contrario felicitarlo.
*/
#include <iostream>
#include <string.h>
int main(){
    char texto1[40],texto2[40];
    regreso:
    std::cout<<"Humano ingresa un texto: ";
    std::cin>>texto1;
    std::cout<<"Humano ingresa un texto similar (sin tomar en cuanta mayusculas o minusculas): ";
    std::cin>>texto2;
    strupr(texto1);
    strupr(texto2);
    if(strcmp(texto1,texto2)!=0){
        std::cout<<"Humano estupido las palabras ("<<texto1<<" "<<texto2<<") no son similares.Intentalo de nuevo:\n";
        goto regreso;
    }
    std::cout<<"Humano bueno, ahora dame la patita :)\n";
    system("pause");
    return 0;
}

