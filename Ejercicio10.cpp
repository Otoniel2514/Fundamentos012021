#include "iostream"
#include "cctype"
using namespace std;
int main()
{
    char letra;
    cout<<"Ingrese una letra"<<endl;
    cin>>letra;

    letra = (char) tolower(letra);

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout<<"Es una vocal"<<endl;
    break;
    default:
    cout<<"No es una vocal"<<endl;
        break;
    }
}