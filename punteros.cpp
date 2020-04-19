#include <iostream>

int main(){
    int numero=2;//0x29ff1c
    int *dir_memoria;
    dir_memoria=&numero;
    /*
    std::cout<<"Valor:"<<numero<<"\n";
    std::cout<<"Direccion memoria:"<<&numero<<"\n";
    */
    std::cout<<"Valor:"<<*dir_memoria<<"\n";
    std::cout<<"Direccion memoria:"<<dir_memoria<<"\n";
    system("pause");
    return 0;
}