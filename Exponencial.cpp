//Programa que calcule la aproximacion de e elevado a la x mediante serie
#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    float Exp = 0; 
    double fact = 1; 
    int i = 0; // Comienza en cero ya que es una suma sucesiva de valores
    int x,y,z;

    cout<<"Introduzca el valor de x: "<<endl;
    cin>>x;
    cout<<"Introduzca el numero de terminos que desea en la serie: "<<endl;
    cin>>y;

    while (i <= y)
    {
        z = 1;
        fact = 1; 
        while(z <= i) 
        {
            fact = fact * z;
            z = z + 1;
        }
        Exp = Exp + pow(x,i)/fact; //Formula
        i = i + 1;
    }
    cout<<endl;
    cout<<"El valor de e elevado a la x es: "<<Exp<<endl;
    return 0;
}
