#include <iostream>

int main(){
    int numero;
    regresar:
    std::cout<<"Humano ingresa un numero entre 1 y 5 o 6 para terminar: ";
    std::cin>>numero;
    switch (numero)
    {
    case 1:
        std::cout<<"Presionaste el numero uno\n";
        goto regresar;
        break;
    case 2:
        std::cout<<"Presionaste el numero dos\n";
        goto regresar;
        break;
    case 3:
        std::cout<<"Presionaste el numero tres\n";
        goto regresar;
        break;
    case 4:
        std::cout<<"Presionaste el numero cuatro\n";
        goto regresar;
        break;
    case 5:
        std::cout<<"Presionaste el numero cinco\n";
        goto regresar;
        break;
    case 6:
        std::cout<<"Humano te voy a extrañar\n";
        system("pause");
        return 0;
        break;    
    default:
        std::cout<<"Humano estupido te dije que entre 1 y 5 o 6 para salir\n";
        goto regresar;
        break;
    }
    system("pause");
    return 0;
}