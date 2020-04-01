/*
Pedir al humano que ingrese un texto de más de 10 letras.
si tiene menos de 10 letras regañamos 😈 al humano.
Si tiene más de 10 letras felicitarlo.
*/
#include <iostream>
#include <string.h>
int main(){
    char texto[10];
    int longitud=0;
    regreso:
    std::cout<<"Humano por favor ingresa un texto con un minimo de 10 letras: ";
    gets(texto);
    longitud=strlen(texto);
    if(longitud>=10){
        std::cout<<"Felicidades humano, ahora dame la patita\n";
    }else{
        std::cout<<"Humano estupido te dije que mas de 10 letras, intentalo de nuevo\n";
        goto regreso;
    }
    system("pause");
    return 0;
}