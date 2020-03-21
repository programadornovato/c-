#include <iostream>

int main(){
    char letra;
    regresar:
    std::cout<<"Humano por favor ingresa una letra vocal: ";
    std::cin>>letra;
    switch (letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        std::cout<<"Bien hecho humano haz precionado una vocal\n";
        break;
    default:
        std::cout<<"No das una tonto esa no es una vocal\n";
        goto regresar;
        break;
    }

    system("pause");
    return 0;
}