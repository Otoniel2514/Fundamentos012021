//Crear un programa que calcule el dia, mes y anio anterior.

#include <iostream>
using namespace std;

int main(void)
{
    int dd, mm, aa, ddAnt, mmAnt, aaAnt;

    cout<<endl;
    cout<<"CALCULO DEL DIA ANTERIOR"<<endl<<endl;
    cout<<"Digite tres enteros correspondiente a dia, mes y anio: ";
    cin>>dd>>mm>>aa; // 31/3/2021 -> 30/3/2021 

    switch(mm){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if(dd >= 1 && dd <= 30){
                ddAnt = dd - 1; // 30 - 1 -> 29
                mmAnt = mm ; // 3
                aaAnt = aa; // 2021
                cout<<"El dia anteriore es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl; // 29/3/2021
            }
            else
                if(dd == 31){
                    ddAnt = dd - 1; // 31 - 1 ->30
                    mmAnt = mm; // 3
                    aaAnt = aa; // 2021
                    cout<<"El dia anterior es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl;  // 30/3/2021
                }
                else
                    cout<<"Dato no valido para dia"<<endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(dd >= 1 && dd <= 29){ // 29/9/2020
                ddAnt = dd - 1; // 29 - 1 -> 28
                mmAnt = mm; // 9
                aaAnt = aa; // 2020
                cout<<"El dia anterior es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl; // 28/9/2020
        }
            else
                if(dd == 30){ // 30/9/2020
                    ddAnt = dd - 1; // 30 - 1 ->29
                    mmAnt = mm; //  9
                    aaAnt = aa; // 2020
                    cout<<"El dia anterior es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl; // 29/9/2020
                }
                else
                    cout<<"Dato no valido para dia"<<endl;
            break;                    
        case 12:
            if(dd >= 1 && dd <= 30){ // 29/12/2020
                ddAnt = dd - 1; // 29 - 1 -> 28
                mmAnt = mm; // 12
                aaAnt = aa; // 2020
                cout<<"El dia anterior es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl; // 28/12/2020
            }
            else
                if(dd == 31){ // 31/12/2020
                    ddAnt = dd - 1; // 31 - 1 ->30
                    mmAnt = mm; // 12
                    aaAnt = aa; // 2020
                    cout<<"El dia anterior es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl; // 30/12/2020
                }
                else
                    cout<<"Dato no valido para dia"<<endl;
            break;                    
        case 2:
            if(aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0))
                if(dd >= 1 && dd <= 28){ // 28/2/2020
                    ddAnt = dd - 1; // 28 - 1 -> 27
                    mmAnt = mm; // 2
                    aaAnt = aa; // 2020
                    cout<<"El dia anterior es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl; //27/2/2020
                }
                else
                    if(dd == 29){ // 29/02/2020
                        ddAnt = dd - 1; // 29 - 1 ->28
                        mmAnt = mm; // 2
                        aaAnt = aa; // 2020
                        cout<<"El dia anterior es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl;// 28/2/2020
                }
                    else
                        cout<<"Dato no valido para dia"<<endl;
            else
                if(dd >= 1 && dd <= 27){ // 27/02/2021
                    ddAnt = dd - 1; // 27 - 1 -> 26
                    mmAnt = mm; // 2
                    aaAnt = aa; // 2021
                    cout<<"El dia anterior es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl; // 26/2/2021
            }
                else
                    if(dd == 28){ // 28/02/2021
                        ddAnt = dd - 1; // 28 - 1 ->27
                        mmAnt = mm; // 2 - 0 -> 2
                        aaAnt = aa; // 2021
                    cout<<"El dia anterior es: "<<ddAnt<<"/"<<mmAnt<<"/"<<aaAnt<<endl; // 27/2/2021
                    }
                    else
                        cout<<"Dato no valido para dia"<<endl;
            break;
        default:
            cout<<"Dato no valido para mes"<<endl;
    }

    cout<<endl;
    return 0;
}