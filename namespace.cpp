#include <iostream>
namespace trigonometria{
    int suma(int a,int b){
        return a+b;
    }
}
namespace aritmetica{
    int suma(int a,int b){
        return a-b;
    }
}
int main(){
    using namespace std;
    cout<<"La suma trigonometrica es: "<<trigonometria::suma(5,6)<<"\n";
    cout<<"La suma aritmetica es:"<<aritmetica::suma(5,6)<<"\n";
    system("pause");
    return 0;
}