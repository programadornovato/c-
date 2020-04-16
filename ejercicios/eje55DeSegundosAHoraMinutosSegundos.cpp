/*
Pedir al humano que ingrese la cantidad de “segundos”.
Crear una función llamada “deSegundosAtiempo” que reciba los “segundos” 
y que reciba por 3 parámetros referenciados (hora,minuto,segundos).
La función “deSegundosAtiempo” debe calcular la cantidad horas, minutos y segundos.
*/
#include <iostream>
void deSegundosAtiempo(int,int& hora,int& minuto,int& segundos);
int main()
{
    int segundos=0;
    int horas=0,minutos=0,segundosRetorna=0;
    std::cout<<"Humano, ingresa la cantidad de segundos: ";
    std::cin>>segundos;
    deSegundosAtiempo(segundos,horas,minutos,segundosRetorna);
    std::cout<<"Tus segundos equivalen a:\n";
    std::cout<<"Horas="<<horas<<"\n";
    std::cout<<"Minutos="<<minutos<<"\n";
    std::cout<<"Segundos="<<segundosRetorna<<"\n";
    system("pause");
    return 0;
}
void deSegundosAtiempo(int segundos,int& horas,int& minutos,int& segundosRetorna){
    horas=segundos/3600;
    segundos=segundos%3600;

    minutos=segundos/60;
    segundos=segundos%60;

    segundosRetorna=segundos;
}
