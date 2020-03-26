#include <iostream>
#include <time.h>

int main(){
    int numero,aleatorio,contador=0;
    srand(time(NULL));
    aleatorio=1+rand()%100;
    do
    {
        std::cout<<"Humano por favor ingresa un numero entre 1 y 100 ("<<aleatorio<<"): ";
        std::cin>>numero;
        if(numero<aleatorio){
            std::cout<<"Humano estupido el numero que ingresaste es menor\n";
        }
        if(numero>aleatorio){
            std::cout<<"Humano estupido el numero que ingresaste es mayor\n";
        }
        contador++;
    } while (numero!=aleatorio);
    std::cout<<"Feliciades humano lograste encontrar el pinche numero despues de "<<contador<<" intentos\n";
    system("pause");
    return 0;
}
