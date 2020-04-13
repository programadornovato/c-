#include <iostream>

template <class elTipo>
void mostrarNumero(elTipo numero);

int main(){
    int numEntero=5;
    float numFloat=5.5656;
    double numDoble=54.545454;
    mostrarNumero(numEntero);
    mostrarNumero(numFloat);
    mostrarNumero(numDoble);
    system("pause");
    return 0;
}
template <class elTipo>
void mostrarNumero(elTipo numero){
    std::cout<<"Mostra numero de cualquier tipo: "<<numero<<"\n";
}