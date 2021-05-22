//Crear un programa que solicite n números desde el teclado, y calcule: la suma de todos los números ingresados y su promedio.

#include "iostream"
using namespace std;
int main()
{
    int n;
    cout<<"Ingrese la cantidad de numeros: "<<endl;
    cin>>n;

    int suma = 0; //acumulador
    float numero;

    for (int i = 0; i < n; i++)
    {
       cout<<"Ingrese un numero "<<i+1<<": "<<endl;
       cin>>numero;

       suma += numero;
    }
    
    cout<<"La suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<suma / n<<endl;
    
    return 0;
}