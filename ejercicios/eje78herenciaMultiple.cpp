#include <iostream>
class Persona{
    private:
        char *nombre;
        int edad;
    public:
        Persona(char _nombre[],int _edad);
        void mostrarPersona();
};
Persona::Persona(char _nombre[],int _edad){
    nombre=_nombre;
    edad=_edad;
}
void Persona::mostrarPersona(){
    std::cout<<"Nombre:"<<nombre<<"\n";
    std::cout<<"Edad:"<<edad<<"\n";
}
class Empleado:public Persona{
    private:
        float sueldo;
    public:
        Empleado(char _nombre[],int _edad,float _sueldo);
        void mostrarEmpleado();
};
Empleado::Empleado(char _nombre[],int _edad,float _sueldo):Persona(_nombre,_edad){
    sueldo=_sueldo;    
}
void Empleado::mostrarEmpleado(){
    std::cout<<"Sueldo:"<<sueldo<<"\n";
}
class Estudiante:public Persona{
    private:
        float calificacion;
    public:
        Estudiante(char _nombre[],int _edad,float _calificacion);
        void mostrarEstudiante();
};
Estudiante::Estudiante(char _nombre[],int _edad,float _calificacion):Persona(_nombre,_edad){
    calificacion=_calificacion;
}
void Estudiante::mostrarEstudiante(){
    std::cout<<"Calificacion:"<<calificacion<<"\n";
}

int main(){
    system("pause");
    return 0;
}