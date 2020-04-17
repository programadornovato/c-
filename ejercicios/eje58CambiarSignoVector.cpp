/*
Crear un vector llamado “vec”.
Crear una función llamada “llenarDatos” que le pida al humano que llene los datos.
Crear una función llamada “cambiaSigno” que reciba el vector cambie el signo de cada elemento.
Crear una función llamada “MostrarVector” que muestre cada elemento del vector.
*/
#include <iostream>
const int TAM=5;
void llenarDatos(int vec[]);
void cambiaSigno(int vec[]);
void MostrarVector(int vec[]);
int main(){
    int vec[TAM];
    llenarDatos(vec);
    MostrarVector(vec);
    cambiaSigno(vec);
    MostrarVector(vec);
    system("pause");
    return 0;
}
void llenarDatos(int vec[]){
    std::cout<<"Humano por favor ingresa los siguientes datos del vector.\n";
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<"Numero "<<i+1<<": ";std::cin>>vec[i];
    }
}
void cambiaSigno(int vec[]){
    for (int i = 0; i < TAM; i++)
    {
        vec[i]=vec[i]*-1;
    }
}
void MostrarVector(int vec[]){
    std::cout<<"\n\nHUMANO ESTE ES TU PICH.. VECTOR\n";
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<"Numero "<<i+1<<": "<<vec[i]<<"\n";
    }
    
}