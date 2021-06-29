#include "iostream"
#include "cstring"
using namespace std;
void RetornarBoleano(bool[],bool[]);
void jugarP(char[], char[]);
void ingreselafrase(char[]);
int main()
{
    char palabra[100];
    char jugar[10];
    cout<<"Ingrese una frase con la que desea jugar el juego de la 'P': "<<endl;
    cin.getline(palabra, 100);

    cout<<"La frase original dada es: "<<palabra<<endl;
    jugarP(palabra, jugar);
    cout<<"La palabra convertida con el juego de la 'P' es: "<<jugar<<endl;
    
    return 0;
}
void RetornarBoleano(bool True, bool False)
{
    char palabra,P;
    if(palabra = P)
    {
        cout<<"Su frase esta digitada correctamente"<<palabra<<endl;
    }
    else{
        cout<<"Su frase esta digitada incorrectamente"<<palabra<<endl;
    }
}
void jugarP(char arreglo[], char jugar[])
{
    int n = strlen(arreglo),z = 0;
    for(int i = 0; i < n; i++){
        switch(arreglo[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                jugar[z] = arreglo[i];
                jugar[z+1] = 'P';
                jugar[z+2] = arreglo[i];  
                z += 3;            
                break;
            default: 
                jugar[z] = arreglo[i];
                z++;
                break;
        }
}
void ingreselafrase(char palabra, char correcta);
{
    char palabra,correcta;
    {
        if(palabra = correcta);
        cout<<"La palabra ingresada es la correcta"<<palabra<<endl;
        }
    }
    system("Pause");
}
