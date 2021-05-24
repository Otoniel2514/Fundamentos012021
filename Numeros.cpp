// Solicite n números enteros desde teclado, luego indique cuántos de ellos estaban entre 1 y 5, cuántos de ellos estaban entre 6 y 10, 
// y cuántos números no estuvieron en ninguno de estos dos grupos.

#include "iostream"
using namespace std;
int main()
{
    int n, cant1=0, cant2=0, cant3=0;
    int aux=0;
    cout<<"PROGRAMA QUE CALCULA CUANTOS NUMEROS ESTAN ENTRE EL GRUPO 1 y 5, CUANTOS ENTRE 6 y 10"<<endl;
    cout<<"Ingrese la cantidad de numeros enteros: "<<endl;
    cin>>n;
    {
        for (int i= 0; i < n; i++)
    {
        cout<<"Ingrese un numero entero: "<<endl;
        cin>>aux;
    
    if (aux >= 1 && aux <=5)
    {
        cant1++;
    }else if (aux >=6 && aux <=10){
        cant2++;
    }else{
        cant3++;
        }
    }
    cout<<"La cantidad de numeros ingresados entre 1 y 5 es: "<<cant1<<endl;
    cout<<"La cantidad de numeros ingresados entre 6 y 10 es: "<<cant2<<endl;
    cout<<"La cantidad ingresada en ninguno de estos 2 grupos es: "<<cant3<<endl;
    }
    system("pause");
    return 0;
}