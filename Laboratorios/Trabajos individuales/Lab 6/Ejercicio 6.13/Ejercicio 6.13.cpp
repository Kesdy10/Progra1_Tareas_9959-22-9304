// Ejercicio 6.13

#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

float x;

int main(){
cout << "Ingrese el valor de x" << endl;
cin >> x;

float y = floor(x + 0.5);

cout << "El redondeo de " << x << " es: " << y;
}
