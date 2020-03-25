/*
Programa que pida numero enteros y los vaya sumando.
Si el número introducido esta dentro de 100 y 200 o es 0 cerrar el programa.
*/
#include <iostream>
int main(){
    int numero,suma=0;
    do
    {
        std::cout<<"Humano porfavor digita un numero entero (el rango de 100 a 200 o 0 cirra el programa): ";
        std::cin>>numero;
        suma=suma+numero;
        std::cout<<"\nAqui esta tu pinche suma: "<<suma<<"\n";
    } while ( ( (numero<100) || (numero>200) ) && (numero!=0) );
   

    system("pause");
    return 0;
}