//Realice un programa que Solicite n carácteres desde teclado, luego indique la cantidad de vocales y la cantidad de no vocales que fueron digitados.

#include "iostream"
using namespace std;
int main()
{
    int n;
    cout<<"Ingrese la cantidad de letras: "<<endl;
    cin>>n; //5

    int vocales = 0, noVocales = 0;
    char c;

    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese la letra "<<i+1<<": "<<endl;
        cin>>c;

        switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        vocales++;
            break;
        default:
        noVocales++;
            break;
        }
    }
    cout<<"El usuario ingreso "<<vocales<<" vocales."<<endl;
    cout<<"El usuario ingreso "<<noVocales<<" no vocales."<<endl;
    
    return 0;
}
