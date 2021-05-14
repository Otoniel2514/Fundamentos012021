//Hacer un programa que muestre la matriz transpuesta visualmente a la matriz original.

#include "iostream"
#include "conio.h"
#include <regex> 
using namespace std;


int validarNumero(int i, int j){
    string numeroValido; 
    regex soloNaturales("^[0-9]+$"); // Expresion regular que nos permitira validar solamente la entrada de numeros naturales.

    while(true){
        cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
        cin >> numeroValido;

        //Entra al if si el valor ingresado es un numero natural.
        if(regex_match(numeroValido, soloNaturales)){
            return stoi(numeroValido);
        }else{
            cout << "Solamente se permite el ingreso de numeros naturales." << endl;
        }
    }
}
void program()
{   
    //Declaracion de variables
    int matriz[100][100], filas,columnas;
    string numeroValido; 
    regex soloNaturales("^[0-9]+$");
    
    //Insertar filas columnas
    cout<<"Ingrese el numero de filas."<<endl;
    cin>>filas;
    cout<<"Ingrese el numero de columnas."<<endl;
    cin>>columnas;
    while(false){
        if(regex_match(numeroValido, soloNaturales)){
            stoi(numeroValido);
        }else{
            cout << "Solamente se permite el ingreso de numeros naturales." << endl;
        }

    }

    //Almacenar datos de la matriz

    for (int i = 0; i <filas; i++)
    {
        for (int j = 0; j < columnas; j++)
            {
                matriz[i][j] = validarNumero(i, j); // Almacenamos el valor retornado por la función en la celda correspondiente de esta manera
                //con seguridad sabremos que la matriz solo contendrá valores numericos naturales.
            }
        }
           //Mostrar la matriz original
           cout<<"Matriz original: "<<endl;
           for (int i = 0; i <filas; i++){
           for (int j = 0; j < columnas; j++)
            {
                cout<<matriz[i][j];
            }
                cout<<endl;
        }
           //Mostrar la matriz transpuesta
           cout<<"Matriz transpuesta: "<<endl;
           for (int i = 0; i <filas; i++){
           for (int j = 0; j < columnas; j++)
            {
                cout<<matriz[j][i];
            }
                cout<<endl;
        }

        getch();
}

int main()
{
    program();
    return 0;
}
    