//Programa que convierta un número binario, a su número decimal equivalente, ingesado desde teclado.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int exponencial,digito;
    double binario, decimal;
   cout<<"Ingrese el numero Binario que desea convertir a decimal: "<<endl;
   cin>>binario;
   exponencial=0;
   decimal=0;
   while(((int)(binario/10))!=0)
   {
           digito = (int)binario % 10;
           decimal = decimal + digito * pow(2.0,exponencial);
           exponencial++;
           binario=(int)(binario/10);
   }
   decimal=decimal + binario * pow(2.0,exponencial);
   cout<<"El numero Decimal resultante de su Binario ingresado es: "<< decimal<<endl;
}