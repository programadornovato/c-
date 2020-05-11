#include <iostream>
class Tiempo{
    private:
        int horas,minutos,segundos;
    public:
        Tiempo(int _horas,int _minutos,int _segundos);
        Tiempo(int tiempoSegundos);
        void mostrar();
};
Tiempo::Tiempo(int _horas,int _minutos,int _segundos){
    horas=_horas;
    minutos=_minutos;
    segundos=_segundos;
}
Tiempo::Tiempo(int tiempoSegundos){
    horas=tiempoSegundos/3600;
    tiempoSegundos=tiempoSegundos%3600;
    minutos=tiempoSegundos/60;
    segundos=tiempoSegundos%60;
}
void Tiempo::mostrar(){
    std::cout<<horas<<":"<<minutos<<":"<<segundos<<"\n";
}
int main(){
    Tiempo t1(04,20,00);
    t1.mostrar();
    Tiempo t2(15600);
    t2.mostrar();
    system("pause");
    return 0;
}