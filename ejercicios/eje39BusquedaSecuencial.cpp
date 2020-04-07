#include <iostream>

int main(){
    int lista[]={1,2,3,4,5},valor,pos=0;
    bool encontrado=false;
    regresa:
    std::cout<<"Humano vas a ingresar un numero de la siguiente lista:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout<<lista[i]<<" ";
    }
    std::cout<<"\nIngresa un numero ";
    std::cin>>valor;
    while (encontrado==false && pos<5 )
    {
        if(valor==lista[pos]){
            encontrado=true;
            break;
        }
        pos++;
    }
    if(encontrado==false){
        std::cout<<"\nHumano estupido el numero que ingresaste no esta en la lista intenta de nuevo: \n";
        pos=0;
        goto regresa;
    }
    else{
        std::cout<<"\nBien hecho humano, ahora dame la patita :)\n";
    }
    system("pause");
    return 0;
}