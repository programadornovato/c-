#include <iostream>
class Persona{
    private:
        int edad;
        char *nombre;
    public:
        Persona(int _edad,char _nombre[]);
        void mostrarPersona();
};
Persona::Persona(int _edad,char _nombre[]){
    edad=_edad;
    nombre=_nombre;
}
void Persona::mostrarPersona(){
    std::cout<<"Edad:"<<edad<<"\n";
    std::cout<<"Nombre:"<<nombre<<"\n";
}
class Alumno:public Persona{
    private:
        char *codigo;
        float calificacion;
    public:
        Alumno(int _edad,char _nombre[],char _codgo[],float _calificacion);
        void mostrarAlumno();
};
Alumno::Alumno(int _edad,char _nombre[],char _codigo[],float _calificacion):Persona(_edad,_nombre){
    codigo=_codigo;
    calificacion=_calificacion;
}
void Alumno::mostrarAlumno(){
    mostrarPersona();
    std::cout<<"Codigo:"<<codigo<<"\n";
    std::cout<<"Calificacion:"<<calificacion<<"\n";
}
int main(){
    Alumno al1(20,"Eugenio","123",10);
    al1.mostrarAlumno();
    //al1.mostrarPersona();
    system("pause");
    return 0;
}