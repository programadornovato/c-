#include <iostream>

int main(){
    int numeroIngresado,numeroAencontrar=5;
    std::cout<<"A ver humano ingresa un numero mayor o igual al que estoy pensando: ";
    std::cin>>numeroIngresado;
    if(numeroIngresado>=numeroAencontrar){
        std::cout<<"Bien jugado hdp\n";
    }
    else{
        std::cout<<"Como estas pendejo sigue intentando\n";
    }
    system("pause");
    return 0;
}