//Crear un programa que Resuelva el problema de indicar si un entero dado es número primo o no lo es.

#include "iostream"
using namespace std;
int main(){
    int numero;
    cout << "Ingrese un numero: "; 
    cin >> numero;

    bool bandera = false;

    for (int i = 2; i < numero; i++)
    {
        if(numero%i == 0){
            bandera = true;
            break;
        }
    }

    if(bandera == true){
        cout << "No es un numero primo" << endl;
    }else{
        cout << "Es un numero primo" << endl;
    }
    return 0;
}