#include "iostream"
#include "math.h"
#include "iomanip"
using namespace std;
int main()
{
    int opcion;
    
    //Mostrar el menu del sistema al usuario
        cout<<"========MENU DE OPCIONES DEL SISTEMA========"<<endl;
        cout<<"\nBienvenido a su menu de consultas de descuentos de ley, sera un gusto atenderle."<<endl;
        cout<<"Ingrese la opcion que desea realizar en el sistema."<<endl;
        cout<<"1. Calcular mis aportes de Renta."<<endl;
        cout<<"2. Calcular mis aportes de AFP."<<endl;
        cout<<"3. Calcular mis aportes del ISSS."<<endl;
        cout<<"Ingrese la opcion que desea realizar en el sistema."<<endl;
        cin>>opcion;

        switch(opcion)
    {
        //Descuento de la renta
        case 1:
        float sueldo1, DesRenta;
        cout << "Ingrese la cantidad de su sueldo: "<<endl;
        cin >>sueldo1;
        DesRenta =(sueldo1 * 0.10);
        cout<<fixed<<setprecision(2);
        cout << "El saldo a descontar de su sueldo en base al 10% de la Renta es: $" <<DesRenta<< endl;
        break;

        //Descuento de AFP
        case 2:
        float sueldo2, DesAFP;
        cout << "Ingrese la cantidad de su sueldo: "<<endl;
        cin >>sueldo2;
        DesAFP =(sueldo2 * 6.25)*0.01;
        cout<<fixed<<setprecision(2);
        cout << "El saldo a descontar de su sueldo en base al 6.25% de AFP es: $" <<DesAFP<< endl;
        break;

        //Descuento de seguro ISSS
        case 3:
        float sueldo3, DesISSS;
        cout<<"Ingrese la cantidad de su sueldo: "<<endl;
        cin >>sueldo3;
        DesISSS =(sueldo3 * 0.2);
        cout<<fixed<<setprecision(2);
        cout << "El saldo a descontar de su sueldo en base al 2% de ISSS es: $"<<DesISSS<< endl;
        break;
    }
    return 0;
}