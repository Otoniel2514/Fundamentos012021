#include "iostream"
using namespace std;
int main()
{
    float distancia;
    int tiempo;
    float velocidad;

    cout<<"Ingrese el tiempo en segundos: "<<endl;
    cin>>tiempo;

    cout<<"Ingrese la velocidad en m/s: "<<endl;
    cin>>velocidad;

    distancia = velocidad * tiempo;

    cout<<"La distancia resultante es: "<<distancia<<endl;

    cout<<"La direccion de la memoria de la variable tiempo es: "<<&tiempo<<endl;
    cout<<"La direccion de la memoria de la variable velocidad es: "<<&velocidad<<endl;
    cout<<"La direccion de la memoria de la variable distancia es: "<<&distancia<<endl;

    return 0;
}