#include <iostream>
#include <fstream>
#include <string.h>
void crearArchivo();
void leerArchivo();
int main(){
    //crearArchivo();
    leerArchivo();
    system("pause");
    return 0;
}
void leerArchivo(){
    std::string texto;
    std::fstream archivo;
    char nombreArchivo[50];
    std::cout<<"Humano que archivo quieres ver:";
    std::cin>>nombreArchivo;
    archivo.open(nombreArchivo,std::ios::in);
    if(archivo.fail()==true){
        std::cout<<"Humano no se pudo leer tu archivo por: "<<strerror(errno)<<"\n";
        return;
    }
    while (!archivo.eof()){
        std::getline(archivo,texto);
        std::cout<<texto<<"\n";
    }
    

}
void crearArchivo(){
    char nombreArchivo[100],textoArchivo[100];
    std::cout<<"Humano ingresa el nombre de tu archivo: ";
    std::cin.getline(nombreArchivo,100,'\n');
    std::cout<<"Humano ingresa el texto de tu archivo:\n";
    std::cin.getline(textoArchivo,100,'\n');
    std::fstream archivo;
    archivo.open(nombreArchivo,std::ios::out);
    if(archivo.fail()==true){
        std::cout<<"Humano, tu archivo no se pudo crear (por alguna razon que el programador no quizo describir).\n";
        return;
    }
    archivo<<textoArchivo;
}