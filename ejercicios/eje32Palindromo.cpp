#include <iostream>
#include <string.h>

int main(){
    char texto[40],textoRev[40];
    regresa:
    std::cout<<"Humano escribe un palindromo: ";
    std::cin>>texto;
    strcpy(textoRev,texto);
    strrev(textoRev);
    if(strcmp(texto,textoRev)!=0){
        std::cout<<"Humano estupido esto ("<<texto<<" "<<textoRev<<") no es un palindromo\n";
        goto regresa;
    }
    std::cout<<"Humano bueno, ahora dame la patita\n";
    system("pause");
    return 0;
}