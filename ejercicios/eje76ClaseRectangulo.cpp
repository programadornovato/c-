#include <iostream>
class Rectangulo{
    private:
        int alto;
        int ancho;
    public:
        Rectangulo(int _alto,int _ancho);
        void perimetro();
        void area();
};
Rectangulo::Rectangulo(int _alto,int _ancho){
    alto=_alto;
    ancho=_ancho;
}
void Rectangulo::perimetro(){
    int _perimetro;
    _perimetro=(alto*2) + (ancho*2);
    std::cout<<"Humano aqui esta tu piche perimetro: "<<_perimetro<<"\n";
}
void Rectangulo::area(){
    int _area;
    _area=alto*ancho;
    std::cout<<"Humano aqui esta tu pinche area: "<<_area<<"\n";
}
int main(){
    //Rectangulo r1=Rectangulo(5,5);
    Rectangulo r1(5,5);
    r1.perimetro();
    r1.area();

    system("pause");
    return 0;
}