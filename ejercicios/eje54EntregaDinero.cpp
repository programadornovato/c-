/*
Pedir al humano que ingrese un “dinero” float.
Crear una función llamada “entregaDinero” que reciba el “dinero” y que reciba por 
    referencia 8 denominaciones de cambio (cien,cincuenta,veinte,diez,cinco,uno).
La función “entregaDinero” debe calcular la cantidad de cambio a entregar.
*/
#include <iostream>
void entregaDinero(int,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno);
int main(){
    int dinero,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
    std::cout<<"Humano cuanto pich** quieres: ";std::cin>>dinero;
    entregaDinero(dinero,cien,cincuenta,veinte,diez,cinco,uno);
    std::cout<<"Humano aqui esta tu pinch* dinero\n";
    std::cout<<"Cien:"<<cien<<"\n";
    std::cout<<"Cincuenta:"<<cincuenta<<"\n";
    std::cout<<"Veinte:"<<veinte<<"\n";
    std::cout<<"Diez:"<<diez<<"\n";
    std::cout<<"Cinco:"<<cinco<<"\n";
    std::cout<<"Uno:"<<uno<<"\n";
    system("pause");
    return 0;
}
void entregaDinero(int dinero,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
    cien=dinero/100;
    dinero=dinero%100;

    cincuenta=dinero/50;
    dinero=dinero%50;

    veinte=dinero/20;
    dinero=dinero%20;

    diez=dinero/10;
    dinero=dinero%10;

    cinco=dinero/5;
    dinero=dinero%5;
    uno=dinero;
}
