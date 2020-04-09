/*
Declarar la estructura materias con nombre de la materia y calificación.
Inicializar el nombre de cada materia.
Pedir que se ingresen las calificaciones de las materias.
Obtener el promedio.
Mostrar un mensaje en caso de que el alumno tenga 5,6,7,8,9,10 o más.

*/
#include <iostream>

struct Materias
{
    char nombre[50];
    float calificacion;
}materia[6]={{"Fisica",0},{"Quimica",0},{"Sociales",0},{"Geografia",0},{"Mate",0},{"Programacion",0}};

int main(){
    float suma=0,promedio;
    std::cout<<"Humano ingresa las calificaciones de cada materia:\n";
    for (int i = 0; i < 6; i++)
    {
        std::cout<<"Calificacion de "<<materia[i].nombre<<": ";
        std::cin>>materia[i].calificacion;
    }
    for (int i = 0; i < 6; i++)
    {
        suma=suma+materia[i].calificacion;
    }
    promedio=suma/6;
    std::cout<<"Promedio: "<<promedio<<"\n";
    if(promedio<=5.9)
    {
        std::cout<<"Alumno estupido ya la cagaste\n";
    }
    if(promedio>=6 && promedio<=6.9)
    {
        std::cout<<"Apenas y la libraste cabron.\n";
    }
    if(promedio>=7 && promedio<=8.9)
    {
        std::cout<<"Bien hecho.\n";
    }
    if(promedio>=9 && promedio<=10)
    {
        std::cout<<"Eres casi un dios.\n";
    }
    if(promedio>10)
    {
        std::cout<<"Eres un dios casi programador.\n";
    }
    system("pause");
    return 0;
}
