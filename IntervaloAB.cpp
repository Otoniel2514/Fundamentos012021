//Crear un programa que Dados dos enteros a y b, que son los límites de un intervalo, muestre todos los enteros en ese intervalo
// que son números pares.

#include "iostream"
using namespace std;
int main()
{
    int a, b;

    cout<<"Ingrese el valor de a: "<<endl;
    cin>>a;
    cout<<"Ingrese el valor de b: "<<endl;
    cin>>b;
    
    // [a,b]
    for (int numero = a; numero <= b; numero++)
    {
        if (numero%2 == 0)
        {
            cout<<numero<<", ";
        }
}

cout<<endl;

return 0;

}