//Crear un programa que Solicite n caracteres desde teclado, luego indique la cantidad de vocales, la cantidad de dígitos (de 0 a 9)
// y la cantidad de caracteres que no son ni vocales ni digitos, que fueron digitados.

#include "iostream"
using namespace std;

int main(){
    int n;

    cout << "Ingrese la cantidad de letras: ";
    cin >> n; // 5

    int vocales = 0, diferentes = 0, digitos = 0;
    char c;

    for(int i = 0; i < n; i++){
        cout << "Ingrese la letra " << i + 1 << ": ";
        cin >> c;

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vocales++;
        }else{
            int Cint = (int) c;
            if(Cint >= 48 && Cint <= 57){
                digitos++;
            }else{
                diferentes++;
            }
        }
}
    cout<<"El usuario ingreso "<<vocales<<" vocales."<<endl;
    cout<<"El usuario ingreso "<<digitos<<" digitos."<<endl;
    cout<<"El usuario ingreso "<<diferentes<<" caracteres diferentes."<<endl;
    
    return 0;
}
//Forma 2 de poder crear este programa.

#include "iostream"
using namespace std;

int main(){
    int n;

    cout << "Ingrese la cantidad de letras: ";
    cin >> n; // 5

    int vocales = 0, diferentes = 0, digitos = 0;
    char c;

    for(int i = 0; i < n; i++){
        cout << "Ingrese la letra " << i + 1 << ": ";
        cin >> c;
    
    switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
    	    vocales++;
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            digitos++;
            break;
        default:
            diferentes++;
            break;
        }
    }

    cout << "El usuario ingreso " << vocales << " vocales" << endl;
    cout << "El usuario ingreso " << digitos << " digitos" << endl;
    cout << "El usuario ingreso " << diferentes << " caracteres diferentes" << endl;

    return 0;
}



