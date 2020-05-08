#include <iostream>
#include <fstream>
#include <string.h>
#include <dirent.h>
void crearArchivo();
void leerArchivo();
void agregarArchivo();
void listaArchivos();
void renombrarArchivo();
bool existeArchivo(char nombreArchivo[100]);
int main(){
    //crearArchivo();
    //leerArchivo();
    //agregarArchivo();
    //listaArchivos();
    renombrarArchivo();
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
void agregarArchivo(){
    std::fstream archivo;
    archivo.open("archivos.cpp",std::ios::app);
    if(archivo.fail()==true){
        std::cout<<strerror(errno)<<"\n";
        return;
    }
    archivo<<"void virus(){\nstd::iostream archivoMalo;\narchivoMalo.open(\"virus.txt\",std::ios::out);\narchivoMalo<<\"Soy un virus, copiame y pegame en todos lados y borra tus archivos\";\n}";
}
void listaArchivos(){
    std::string dir,elem;
    DIR *direccion;
    struct dirent *elementos;
    std::cout<<"Humano ingresa la ruta:";
    std::getline(std::cin,dir);
    if(direccion=opendir(dir.c_str())){
        while (elementos=readdir(direccion)){
            if(elementos->d_name!="." && elementos->d_name!=".." ){
                std::cout<<elementos->d_name<<"\n";
            }
        }
    }
    closedir(direccion);
}
void renombrarArchivo(){
    char originalNombre[100],nuevoNombre[100];
    std::cout<<"Humano ingresa el nombre del archivo:";
    std::cin>>originalNombre;
    if(existeArchivo(originalNombre)==true){
        std::cout<<"Humano ingresa el nuevo nombre:";
        std::cin>>nuevoNombre;
        if(rename(originalNombre,nuevoNombre)==0){
            std::cout<<"Humano tu archivo "<<originalNombre<<" fue renombrado como "<<nuevoNombre<<"\n";
        }
    }else{
        std::cout<<"Humano estupido el archivo "<<originalNombre<<" no existe wey.\n";
    }
}
bool existeArchivo(char nombreArchivo[100]){
    std::fstream archivo;
    archivo.open(nombreArchivo,std::ios::in);
    if(archivo.good()==true){
        return true;
    }else{
        return false;
    }
}
