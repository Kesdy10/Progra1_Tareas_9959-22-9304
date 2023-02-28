//Fecha creeación: 7 feb 2023 - autor: javier lima
//Instrucciones: Escriba un programa que reciba tres enteros del teclado e imprima la suma, promedio, producto, menor y mayor de estos números
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main(){
    int a, b , c;
    int suma, prom, prod;

cout<<"-------------------------------------------------------\n";
cout<<"                  EJERCICIO 2.19                       \n";
cout<<"SUMA, PROMEDIO, PRODUCTO, MENOR Y MAYOR DE TRES NUMEROS\n";
cout<<"\n\n";
cout<<"pon el primer numero: ";
cin>> a;
cout<<"pon el segundo numero: ";
cin>> b;
cout<<"pon el tercer numero:  ";
cin>> c;

suma = a+b+c;
    cout<<"\n el resultado de la suma es:   "<<suma<<endl<<endl;
prom= (a+b+c)/3 ;
    cout<<"\n el resultado del promedio es:  "<<prom<<endl<<endl;

prod = (a*b)*c;
    cout<<"\n el resultado del producto es:   "<<prod<<endl<<endl;

    if (a>b, a>c){
        cout<<"el numero mayor es: "<<a<<endl<<endl;
    }
    if (b>a, b>c){
        cout<<"el numero mayor es: "<<b<<endl<<endl;
    }
    if (c>a, c>b){
        cout<<"el numero mayor es: "<<c<<endl<<endl;
    }

        if (a<=b, a<=c){
            cout<<"el numero menor es: "<<a<<endl<<endl;
        }
        if (c<=a, c<=b){
            cout<<"el numero menor es: "<<c<<endl<<endl;
        }

system("pause");

}
