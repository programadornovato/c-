/*
Crear un vector llamado “vec”.
Crear una función llamada “llenarDatos” que le pida al humano que llene los datos.
Crear una función llamada “sumaDatos” que reciba el vector y sume el vector y retorne la suma.
*/
#include <iostream>
const int TAM=5;
void llenarDatos(int vec[]);
int sumaDatos(int vec[]);
int main(){
    int vec[TAM],suma;
    llenarDatos(vec);
    suma=sumaDatos(vec);
    std::cout<<"Humano aqui esta tu inche suma="<<suma<<"\n";
    system("pause");
    return 0;
}
void llenarDatos(int vec[]){
    std::cout<<"Humano vas a ingresar "<<TAM<<" numeros.\n";
    for (int i = 0; i < TAM; i++)
    {
        std::cout<<"Numero "<<i+1<<": ";std::cin>>vec[i];
    }
}
int sumaDatos(int vec[]){
    int suma=0;
    for (int i = 0; i < TAM; i++)
    {
        suma=suma+vec[i];
    }
    return suma;
}
