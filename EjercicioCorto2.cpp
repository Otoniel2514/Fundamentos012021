/*Resuelva ambos en un solo programa. Su programa 
completo debe también incluir la función main para realizar las invocaciones necesarias a las 
funciones que se le piden*/
#include "iostream"
#include "string"
using namespace std;
bool comprobarJuegoP(string cadena);
string descomponerLenguajeDeLaP (string cadena);
int main()
{
    string frase;
    cout << "\n======Juego de la palabra con P======\n"<<endl;
    cout << "Digite una frase que este hablada con el lenguaje de la letra P: "<<endl;
    getline(cin, frase);

        // Nos sirve para comprueba si la frase está o no escrita en lenguaje de la p
    if (!comprobarJuegoP(frase))
        cout << "No ha ingresado una frase que es hablada con el lenguaje de la P.";
    
    else {
        cout << "La frase original es: ";
        cout << descomponerLenguajeDeLaP(frase);
    }

    return 0;
}
// Desarrollamos las funciones declaradas en la cabezera del codigo
bool comprobarJuegoP(string cadena){
    bool flag = true;
    for (int i = 0; i < cadena.length(); i++) {
        switch (cadena[i]) {
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':
        
            if (cadena[i+1] != 'p' || cadena[i+2] != cadena[i])
                flag = false;
            else
                i+=2;
            break;
        }
    }
    return flag;
}

string descomponerLenguajeDeLaP(string cadena) {
    string cadena_descompuesta = "";
    for (int i = 0; i < cadena.length(); i++) {
        
        switch (cadena[i]) {
        case 'a':
        case 'e':
        case 'o':
        case 'i': 
        case 'u':
           
            cadena_descompuesta += cadena[i];
            i+=2;
            break;
        default:
            cadena_descompuesta += cadena[i];
            break;
        }
    }
    return cadena_descompuesta;
}

