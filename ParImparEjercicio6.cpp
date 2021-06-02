// Crear un programa que Dados dos enteros a y b, que son los límites de un intervalo, 
//realice la suma de todos los números pares, la suma de todos los números impares y muestre ambos resultados.

#include "iostream"
using namespace std;
int main()
{
    int sumapar=0,sumaimpar=0, LimiteA,LimiteB;

    cout<<"Introduce el valor de A que es el limite inferior: "<<endl;
    cin>>LimiteA;
    cout<<"Introduce el valor de B que es el limite superior: "<<endl;
    cin>>LimiteB;
    cout<<endl;
  
    for(int LimiteA = LimiteA;LimiteA<=LimiteB;LimiteA++)
    {
        if(LimiteA%2 != 0)
    {
        sumaimpar=sumaimpar+LimiteA;
    }else
        sumapar=LimiteA+sumapar;
    }
    cout<<"La suma de los numeros pares en el intervalo indicado son: "<<sumapar<<endl;
    cout<<"La suma de los numeros impares en el intervalo indicado son: "<<sumaimpar<<endl;

return 0;
}