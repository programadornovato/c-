/*
Pedir al humano un número positivo, en caso de que el número ingresado 
sea menor a 1 ofender al humano y obligarlo a ingresar de nuevo el número.
Crear una función recursiva que sume los números inferiores hasta llegar a 1.
*/
#include <iostream>
int sumaRecursiva(int numero);
int main(){
    int n;
    regresar:
    std::cout<<"Humano ingresa un numero superior a 1:";
    std::cin>>n;
    if(n<1){
        std::cout<<"Humano tonto el numero "<<n<<" es menor a 1 intenta de nuevo:";
        goto regresar;
    }
    std::cout<<"Bien hecho humano la suma recursiva de "<<n<<" es "<<sumaRecursiva(n)<<" ahora dame la patita\n";
    system("pause");
    return 0;
}
int sumaRecursiva(int numero){
    int suma=0;
    if(numero==1){
        suma=1;
    }else{
        suma=numero+sumaRecursiva(numero-1);
    }
    return suma;
}