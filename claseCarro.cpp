/*
Crearemos la clase carro la cual tendrán una llave y un número de serie 
    los cuales podrán encender,acelerar y frenar.
Crearemos carros (3 instancias de la clase carro) los que van a poder realizar 
    las mencionadas acciones pero esas acciones solo las van a poder con sus respectivas llaves.
*/
#include <iostream>
class Carro{
    private:
        int llave;
        int numeroSerie;
        bool acceso;
        int velocidad;
    public:
        Carro(int _llave,int _numeroSerie);
        void encender(int _llave);
        void acelerar();
        void frenar();
        std::string marca;
        std::string modelo;
};
Carro::Carro(int _llave,int _numeroSerie){
    llave=_llave;
    numeroSerie=_numeroSerie;
    acceso=false;
    velocidad=0;
}
void Carro::encender(int _llave){
    if(_llave==llave){
        acceso=true;
        std::cout<<"Carro encendido\n";
    }else{
        acceso=false;
        std::cout<<"Equivocate de nuevo y le llamo a la policia\n";
    }
}
void Carro::acelerar(){
    if(acceso==true){
        velocidad=velocidad+10;
        std::cout<<"Tu velociada es "<<velocidad<<"\n";
    }else{
        std::cout<<"No tu no tienes acceso estupido.\n";
    }
}
void Carro::frenar(){
    if(acceso==true){
        velocidad=velocidad-10;
        std::cout<<"Tu velociada es "<<velocidad<<"\n";
    }else{
        std::cout<<"No tu no tienes acceso estupido.\n";
    }
}
int main(){
    Carro bocho1=Carro(123,55);
    Carro bocho2=Carro(124,56);
    Carro bocho3=Carro(125,57);
    bocho1.encender(125);
    bocho1.acelerar();
    bocho1.acelerar();
    bocho1.acelerar();
    bocho1.frenar();

    bocho2.encender(124);
    system("pause");
    return 0;
}