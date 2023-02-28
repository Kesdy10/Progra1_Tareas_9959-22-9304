//Fecha creeación: 7 feb 2023 - autor: javier lima
//Instrucciones: Indique el orden de evaluación de los operadores en cada una de las siguientes instrucciones en C++ y muestre el valor de x después de ejecutar cada una de ellas.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b , c;

cout<<"-------------------------------------------------------\n";
cout<<"                  EJERCICIO 2.15                       \n";
cout<<"   INDIQUE EL ORDE DE EVALUACION DE LOS OPERADORES    \n";
cout<<"\n\n";
cout<<"a) x = 7 + 3 * 6 / 2 - 1; \n";
cout<<"b) x = 2 % 2 + 2 * 2 - 2 / 2;  \n";
cout<<"c) x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );  \n";
cout<<"\n\n";

a = 7 + 3 * 6 / 2 - 1;
b = 2 % 2 + 2 * 2 - 2 / 2;
c = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );

cout<<"\n el resultado de a es:  "<<a<<endl;
cout<<"En esta operacion el programa realiza un parentesis: 7 + (3 * 6) luego lo divide en 2 y resta 1  \n";

cout<<"\n el resultado de b es:  "<<b<<endl;
cout<<"En esta operacion el programa realiza primero varias operaciones:\n";
cout<<" 7 + (3 * 6) luego lo divide en 2 y resta 1  \n";

cout<<"\n el resultado del c  es:  "<<c<<endl;
cout<<"En esta operacion el programa realiza primero varias operaciones:\n";
cout<<" 1: ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) )  \n";
cout<<" 2: ( 3 * 9 * ( 3 + ( 27 / 3  ) ) )  \n";
cout<<" 3: (27 * ( 3 + 9  ) )  \n";
cout<<" 4: (27 * 12)  \n";
cout<<" 5: 324  \n";


system("pause");
}
