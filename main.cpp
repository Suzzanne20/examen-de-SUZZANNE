#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
void menu(); void labo(); void login();
int facto(int ); int tab(int ); int pari(int ); int work(int ); int bank(int );
int result, num1, sumi, sump, prom, opc, xpar=0,ximp=0,suma=0, c, succ, intento;
const string msj="El resultado del calculo es: ";
const string calc="\nRealizando calculo.... ";
char pass[10];
const char contrasena[]="123456"; ;
int main ()
{
    menu();
    cout<<"\nIngrese la Opcion deseada:"<<endl;
    cin>> opc;

    switch(opc){
        case 1:
            cout<<"\n  >>Ingrese el numero para determinar su Factorial!<<  "<<endl;
            cin>>num1;
            cout<<calc<<endl;
            facto(num1);
            cout<<msj<<result<<endl;
            break;
        case 2:
            cout<<"\n  >>Ingrese un numero<<"<<endl;
            cin>>num1;
            cout<<calc<<endl;
            cout<<"\nLa tabla de Multiplicar del "<<num1<<" es:"<<endl;
            tab(num1);
            break;
        case 3:
            system("cls");
            pari(num1);
            cout<<calc<<endl;
            cout<<"\nCantidad de Pares: "<<xpar<<endl;
            cout<<"La suma de los numeros es: "<<suma<<endl;
            cout<<"La suma de los numeros PARES es: "<<sump<<endl;
            cout<<"La suma de los numeros IMPARES es: "<<sumi<<endl;
            cout<<"El promedio de los numeros IMPARES es: "<<prom<<endl;
            break;
        case 4:
            labo();
            cin>>num1;
            work(num1);
            break;
        case 5:
            login();
            bank(num1);
            break;
        default:
            cout<<"\n Opcion Invalida"<<endl;
            break;

    }
    return 0;
}

void menu(){
    cout<<"          !PROGRAMA MULTIFUNCIONAL!          "<<endl;
    cout<<"=============================================="<<endl;
    cout<<"Ingrese el # de opción del calculo a realizar"<<endl;
    cout<<"\n 1. FACTORIAL "<<endl;
    cout<<"\n 2. TABLA DE MULTIPLICAR "<<endl;
    cout<<"\n 3. CALCULO PARES E IMPARES "<<endl;
    cout<<"\n 4. QUE DIA ES? "<<endl;
    cout<<"\n 5. INGRESAR A BANCA VIRTUAL "<<endl;
    cout<<"==============================================\n "<<endl;
}

void labo(){
    system("cls");
    cout<<"     QUE DIA ES?   "<<endl;
    cout<<"==================="<<endl;
    cout<<"Ingrese el # de opción"<<endl;
    cout<<"1. Lunes "<<endl;
    cout<<"2. Martes "<<endl;
    cout<<"3. Miercoles "<<endl;
    cout<<"4. Jueves "<<endl;
    cout<<"5. Viernes "<<endl;
    cout<<"6. Sabado "<<endl;
    cout<<"7. Domingo "<<endl;
    cout<<"==================\n "<<endl;
}

void login(){
    system("cls");
    cout<<"             !BIENVENIDO A SUSY BANK!           "<<endl;
    cout<<"================================================="<<endl;
    cout<<"Ingrese sus credenciales para ingresar a la banca"<<endl;
}

//1
int facto(int num1){
    if(num1<0) return 0;
    else if (num1>1)
        return result=num1*facto(num1-1);
}

