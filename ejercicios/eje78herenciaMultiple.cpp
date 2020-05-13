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
class Universitario:public Estudiante{
    private:
        char *carrera;
    public:
        Universitario(char _nombre[],int _edad,float _calificacion,char _carrera[]);
        void mostrarUniversitario();
};
Universitario::Universitario(char _nombre[],int _edad,float _calificacion,char _carrera[]):Estudiante(_nombre,_edad,_calificacion){
    carrera=_carrera;
}
void Universitario::mostrarUniversitario(){
    std::cout<<"Carrera: "<<carrera<<"\n";
}
int main(){
    Persona p1("Euegenio",30);
    p1.mostrarPersona();
    std::cout<<"________________\n";
    Empleado e1("Juan",20,15000);
    e1.mostrarPersona();
    e1.mostrarEmpleado();
    std::cout<<"________________\n";
    Estudiante es1("Maria",18,10);
    es1.mostrarPersona();
    es1.mostrarEstudiante();
    std::cout<<"________________\n";
    Universitario u1("Juana",25,9,"Informatica");
    u1.mostrarPersona();
    u1.mostrarEstudiante();
    u1.mostrarUniversitario();
    system("pause");
    return 0;
}