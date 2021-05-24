//Elabore un programa que solicite las notas de los tres exámenes de un estudiante, calcule su nota final e indique 
//mediante un mensaje si ha aprobado o reprobado.

#include "iostream"
using namespace std;
int main()
{
    float NotaP1, NotaP2, NotaP3, Promedio;
    cout<<"Programa que calcula el promedio de tres notas de parciales"<<endl;
    cout<<endl;

    cout<<"Ingrese la primer nota obtenidad en el Parcial 1: "<<endl;
    cin>>NotaP1;
    cout<<"Ingrese la segunda nota obtenidad en el Parcial 2: "<<endl;
    cin>>NotaP2;
    cout<<"Ingrese la tercer nota obtenidad en el Parcial 3: "<<endl;
    cin>>NotaP3;

    cout.precision(2);
    Promedio = (NotaP1 * 0.25 + NotaP2 * 0.35 + NotaP3 * 0.40);
    cout<<"Su nota promedio de sus parciales es: "<<Promedio<<endl;
    
    if (Promedio >6)
    {
        cout<<"Aprobado."<<endl;
    }else{
        cout<<"Reprobado."<<endl;
    }
     return 0;
}