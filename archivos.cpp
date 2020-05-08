#include <iostream>
#include <fstream>
#include <string.h>
#include <dirent.h>
void crearArchivo();
void leerArchivo();
void agregarArchivo();
void listaArchivos();
void renombrarArchivo();
void borrarArchivo();
bool existeArchivo(char nombreArchivo[100]);
void menu();
int main(){
    menu();
    system("pause");
    return 0;
}
void menu(){
    int opcion;
    regresaMenu:
    system("cls");
    std::cout<<"1.- Listar archivos\n";
    std::cout<<"2.- Leer archivo\n";
    std::cout<<"3.- Crear archivo\n";
    std::cout<<"4.- Borrar archivo\n";
    std::cout<<"5.- Renombrar archivo\n";
    std::cout<<"6.- Agregar texto a un archivo\n";
    std::cout<<"7.- Salir\n";
    std::cout<<"Ingresa una opcion:";
    std::cin>>opcion;
    std::cin.ignore();
    switch (opcion)
    {
    case 1:
        listaArchivos();
        system("pause");
        goto regresaMenu;
        break;
    case 2:
        leerArchivo();
        system("pause");
        goto regresaMenu;
        break;
    case 3:
        crearArchivo();
        system("pause");
        goto regresaMenu;
        break;
    case 4:
        borrarArchivo();
        system("pause");
        goto regresaMenu;
        break;
    case 5:
        renombrarArchivo();
        system("pause");
        goto regresaMenu;
        break;
    case 6:
        agregarArchivo();
        system("pause");
        goto regresaMenu;
        break;
    default:
        return;
        break;
    }
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
void borrarArchivo(){
    char nombreArchivo[100];
    std::cout<<"Humano ingresa el nombre del archivo a borrar:";
    std::cin>>nombreArchivo;
    if(existeArchivo(nombreArchivo)==true){
        if(remove(nombreArchivo)==0){
            std::cout<<"Humano tu archivo "<<nombreArchivo<<" fue borrado existosamente\n";
        }
    }else{
        std::cout<<"Humano estupido el archivo "<<nombreArchivo<<" no existe\n";
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
