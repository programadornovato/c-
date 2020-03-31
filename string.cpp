#include <iostream>

int main(){
    char programador[]="programador";
    //char novato[]={'n','o','v','a','t','o'};
    char nombre[5];
    std::cout<<programador<<"\n"<<sizeof(programador)<<"\n";
    //std::cout<<novato<<"\n"<<sizeof(novato)<<"\n";
    std::cout<<"Humano ingresa tu nombre: ";
    //std::cin>>nombre;//eugenio chaparro
    //gets(nombre);
    std::cin.getline(nombre,sizeof(nombre),'\n');
    std::cout<<nombre<<"\n";
    system("pause");
    return 0;
}