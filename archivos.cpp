#include <iostream>
#include <fstream>
void crearArchivo();
int main(){
    crearArchivo();
    system("pause");
    return 0;
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