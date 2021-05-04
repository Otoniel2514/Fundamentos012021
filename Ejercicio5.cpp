#include "iostream"
using namespace std;
int main(void)
{
    //En este programa se calcula el saldo a pagar en un puesto de venta de antojitos improvisado en Antiguo Cuscatlan.

    int cantidadRiguas;
    int cantidadPastVerduras;
    int cantidadVasoAtol;
    float Pago;

    cout<<endl;
    cout<<"Puesto de venta de antojitos improvisado en Antiguo Cuscatlan."<<endl<<endl;
    cout<<"Bienvenido/a al puesto de antojitos Canuta, sera un gusto atenderle."<<endl;
    cout<<endl;

    //Tomarle el pedido al cliente.
    
    cout<<"Digite la cantidad de Riguas que desea: "<<endl;
    cin>>cantidadRiguas;
    cout<<"Digite la cantidad de Pastelitos de verdura que desea: "<<endl;
    cin>>cantidadPastVerduras;
    cout<<"Digite la cantidad de vasos de atol de elote que desea: "<<endl;
    cin>>cantidadVasoAtol;

    Pago = cantidadRiguas * 0.75 + cantidadPastVerduras * 0.50 + cantidadVasoAtol * 0.60;

    cout<<endl;
    cout<<"La cantidad a pagar por su pedido es de: "<<'$'<<Pago<<endl;
    
    return 0;
}