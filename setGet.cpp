#include <iostream>
class Numero{
    private:
        int x,y;
    public:
        Numero();
        void setx(int _x);
        void sety(int _y);
        int getx();
        int gety();
};
Numero::Numero(){
}
void Numero::setx(int _x){
    x=_x;
}
void Numero::sety(int _y){
    y=_y;
}
int Numero::getx(){
    return x;
}
int Numero::gety(){
    return y;
}
int main(){
    Numero n;
    n.setx(1);
    n.sety(2);
    std::cout<<"x="<<n.getx()<<" y="<<n.gety()<<"\n";
    system("pause");
    return 0;
}