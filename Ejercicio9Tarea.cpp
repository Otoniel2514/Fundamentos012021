//Este programa indica cual es el signo zodiacal apartir de la intoduccion de la fecha de nacimiento por parte del usuario.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int mes, dia;
    cout<<"\t\tCONSULTA DEL SIGNO ZODIACAL"<<endl;
    cout<<"(1)Enero\t(2)Febrero\t(3)Marzo\t(4)Abril\t(5)Mayo\t(6)Junio"<<endl;
    cout<<"(7)Julio\t(8)Agosto\t(9)Septiembre\t(10)Octubre\t(11)Noviembre\t(12)Diciembre"<<endl;
    
    //Pedir datos al usuario
      cout<<"Ingrese el mes que desea consultar en formato de numero: "<<endl;
      cin>>mes;
      cout<<"Ingrese el dia de nacimiento para consultar su signo zodiacal: "<<endl;
      cin>>dia;

    if(mes == 1){
        if(dia >= 20){
            cout<<"Es Capricornio"<<endl;
        }
        else{
            cout <<"No es Capricornio"<<endl;
        }
    }else if (mes == 2){
        if(dia <= 16){
           cout<<"Es Capricornio"<<endl; 
        }else{
            cout<<"No es Capricornio"<<endl;
        }
    }
    if(mes ==2){
        if(dia >= 17)
        {
            cout<<"Es Acuario"<<endl;
        }
        else{
            cout<<"No es Acuario"<<endl;
        }
    }else if(mes == 3){
        if(dia <= 11)
        {
            cout<<"Es Acuario"<<endl;
        }else{
            cout<<"No es Acuario"<<endl;
        }
        }
        if(mes == 3){
        if(dia >= 12){
            cout <<"Es Piscis"<<endl;
        }
        else{
            cout <<"No es Piscis"<< endl;
        }
    }else if (mes == 4){
        if(dia <= 18){
           cout<<"Es Piscis"<<endl; 
        }else{
            cout<<"No es Piscis"<<endl;
        }
    }
    if(mes == 4){
        if(dia >= 19){
            cout<<"Es Aries"<<endl;
        }
        else{
            cout<<"No es Aries"<<endl;
        }
    }else if (mes == 5){
        if(dia <= 13){
           cout<<"Es Aries"<<endl; 
        }else{
            cout<<"No es Aries"<<endl;
        }
    }
    if(mes == 5){
        if(dia >= 14){
            cout<<"Es Tauro"<<endl;
        }
        else{
            cout<<"No es Tauro"<<endl;
        }
    }else if (mes == 6){
        if(dia <= 21){
           cout<<"Es Tauro"<<endl; 
        }else{
            cout<<"No es Tauro"<<endl;
        }
    }
    if(mes == 6){
        if(dia >= 22){
            cout<<"Es Geminis"<<endl;
        }
        else{
            cout<<"No es Geminis"<< endl;
        }
    }else if (mes == 7){
        if(dia <= 20){
           cout<< "Es Gemenis"<<endl; 
        }else{
            cout<<"No es Geminis"<<endl;
        }
    }
    if(mes == 7){
        if(dia >= 21){
            cout<<"Es Cancer"<<endl;
        }
        else{
            cout<<"No es Cancer"<<endl;
        }
    }else if (mes == 8){
        if(dia <= 10){
           cout<<"Es Cancer"<<endl; 
        }else{
            cout <<"No es Cancer"<<endl;
        }
    }
    if(mes == 8){
        if(dia >= 11){
            cout<<"Es Leo"<<endl;
        }
        else{
            cout<<"No es Leo"<<endl;
        }
    }else if (mes == 9){
        if(dia <= 16){
           cout<<"Es Leo"<<endl; 
        }else{
            cout<<"No es Leo"<<endl;
        }
    }
    if(mes == 9){
        if(dia >= 17){
            cout<<"Es Virgo"<<endl;
        }
        else{
            cout<<"No es Virgo"<<endl;
        }
    }else if (mes == 10){
        if(dia <= 30){
           cout<<"Es Virgo"<<endl; 
        }else{
            cout<<"No es Virgo"<<endl;
        }
    }
    if(mes == 10){
        if(dia >= 31){
            cout<<"Es Libra"<<endl;
        }
        else{
            cout<<"No es Libra"<<endl;
        }
    }else if (mes == 11){
        if(dia <= 23){
           cout<<"Es Libra"<<endl; 
        }else{
            cout<<"No es Libra"<<endl;
        }
    }
    if(mes == 11){
        if(dia >= 24){
            cout<<"Es Escorpion"<<endl;
        }
        else{
            cout<<"No es Escorpion"<<endl;
        }
    }else if (mes == 11){
        if(dia <= 29){
           cout<<"Es Escorpion"<<endl; 
        }else{
            cout<<"No es Escorpion"<< endl;
        }
    }
    if(mes == 11){
        if(dia >= 30){
            cout<<"Es Ofiuco"<<endl;
        }
        else{
            cout<<"No es Ofiuco"<<endl;
        }
    }else if (mes == 12){
        if(dia <= 17){
           cout<<"Es Ofiuco"<<endl; 
        }else{
            cout<<"No es Ofiuco"<<endl;
        }
    }
    if(mes == 12){
        if(dia >= 18){
            cout<<"Es Sagitario"<<endl;
        }
        else{
            cout<<"No es Sagitario"<<endl;
        }
    }else if (mes == 1){
        if(dia <= 19){
           cout<<"Es Sagitario"<< endl; 
        }else{
            cout<< "No es Sagitario"<< endl;
        }
    }
    return 0;
}