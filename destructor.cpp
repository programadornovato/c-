#include <iostream>
int numeroPersonas;
class Persona{
    private:
        int NSS;
    public:
        Persona(int _NSS);
        ~Persona();
        void mostrar();
};
Persona::Persona(int _NSS){
    NSS=_NSS;
    numeroPersonas++;
    std::cout<<"Se creo la persona con NSS "<<NSS<<"\n";
}
Persona::~Persona(){
    numeroPersonas--;
    std::cout<<"Se destruyo la persona con NSS "<<NSS<<"\n";
}
void Persona::mostrar(){
    std::cout<<"Persona con NSS "<<NSS<<"\n";
}
void llama();
int main(){
    llama();
    std::cout<<"Numero de personas: "<<numeroPersonas<<"\n";
    system("pause");
    return 0;
}
void llama(){
    Persona p1(1);
    p1.mostrar();
    Persona p2(2);
    p2.mostrar();
}