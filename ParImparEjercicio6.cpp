// Crear un programa que Dados dos enteros a y b, que son los límites de un intervalo, 
//realice la suma de todos los números pares, la suma de todos los números impares y muestre ambos resultados.

#include "iostream"
using namespace std;
int main()
{
    int sumapar=0,sumaimpar=0, LimiteX;

    cout<<"Introduce el valor de a: "<<endl;
    cin>>LimiteX;
    cout<<"Introduce el valor de b: "<<endl;
    cin>>LimiteX;
    cout<<endl;
  
    for(int i=1; i<=LimiteX; i++){
    if(i%2 != 0)
    {
        sumaimpar=sumaimpar+i;
    }else
        sumapar=i+sumapar;
    }
    cout<<"La suma de los numeros impares en el intervalo indicado son: "<<sumaimpar<<endl;
    cout<<"La suma de los numeros pares en el intervalo indicado son: "<<sumapar<<endl;

return 0;
}
    
    
    
    
    
    
    
    
    
    
    