//Este programa calcula el area de un Rombo.
#include "iostream" 
using namespace std;
int main()
{
    cout<<"CALCULAR EL AREA DE UN ROMBO"<<endl<<endl;

    //Declaracion de variables a utilizar en el programa
    float DMayor, dMenor, Area;
    
    //Pedir al usuario que ingrese los datos
    cout<<"Ingrese el valor de D que es la diagonal mayor: "<<endl;
    cin>>DMayor;
    cout<<"Ingrese el valor de d que es la diagonal menor :"<<endl;
    cin>>dMenor;

    Area = DMayor * dMenor/ 2;
    cout<<"El area del Rombo es: "<<Area<<endl;
    
    cout<<endl;
    return 0;
}