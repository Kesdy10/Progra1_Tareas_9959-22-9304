// Ejercicio 6.14

#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

float x;

int main(){
cout << "Ingrese el valor de x" << endl;
cin >> x;

float y = floor(x + 0.5);

cout << "El redondeo de entero " << x << " es: " << y << endl;
cout << "El redondeo de decimos " << x << " es: " << (y*10+0.5)/10 << endl;
cout << "El redondeo de centecimos " << x << " es: " << (y*100+0.5)/100 << endl;
cout << "El redondeo de milesimos " << x << " es: " << (y*1000+0.5)/1000 << endl;
}
