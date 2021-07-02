//Programa que convierta un número binario, a su número decimal equivalente, ingesado desde teclado.
#include "iostream"
using namespace std;

void convertirBinarioADecimal(int, int[], int&);
void imprimirDecimal(int[], int);
int main()
{
    int binario, digitosDecimal = 0;
    int decimal[100];
    cout<<"Ingrese el numero Binario que desea convertir a decimal: "<<endl;
    cin>>binario;
    convertirBinarioADecimal(binario, decimal, digitosDecimal);
    cout<<"El numero Decimal resultante de su Binario ingresado es: "<<endl;
    imprimirDecimal(decimal, digitosDecimal);
    return 0;
}
void convertirBinarioADecimal(int binario, int decimal[], int &digitosDecimal)
{
    while (binario > 0)
    {
        decimal[digitosDecimal] = binario%2;
        binario = binario / 2;
        digitosDecimal++;
    }
}
void imprimirDecimal(int arreglo[], int n){
    for(int i = (n - 1); i >= 0; i--) cout<<arreglo[i];
    cout<<endl;
}
