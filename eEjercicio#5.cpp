//Programa que calcule la aproximacion de e elevado a la x mediante serie
#include "iostream"
#include "math.h"
using namespace std;
float e(int,int);
int fact(int);
int main()
{
    int i = 0; // Comienza en cero ya que es una suma sucesiva de valores
    int x,y; //Variables a utilizar en el programa

    cout<<"Introduzca el valor de x: "<<endl;
    cin>>x;
    cout<<"Introduzca el numero de terminos que desea en la serie: "<<endl;
    cin>>y;
    cout<<"El valor de e elevado a la x es: "<<e(x,y)<<endl;
    return 0;
}
float e(int x, int y )
{
    float Exp = 0;
    for (int i = 0; i <= y; i++)
    {
        Exp = Exp + pow(x,i)/fact(i);
    }
    return Exp;
}
int fact(int z){
    int resultado = 1;
    if(z == 0 || z == 1){
        return 1;
    }
    for (int i = 1; i <= z; i++)
    {
        resultado *= i;
    }
    return resultado;
}