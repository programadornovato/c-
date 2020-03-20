#include <iostream>
int main(){
    float practicas,particiapcion,examen,res;
    std::cout<<"Humano ingresa los datos que se te piden a continuacion\n";
    std::cout<<"Calificacion de las practicas: ";std::cin>>practicas;
    std::cout<<"Calificacion de la particiapcion: ";std::cin>>particiapcion;
    std::cout<<"Calificacion deL examen: ";std::cin>>examen;
    practicas*=0.40;
    particiapcion*=0.20;
    examen*=0.40;
    res=practicas+particiapcion+examen;
    std::cout<<"\nAqui esta tu piche calificacion "<<res<<"\n";
    system("pause");
    return 0;
}