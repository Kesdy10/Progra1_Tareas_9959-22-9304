// Ejercicio 6.11

#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

float x;

int main(){

x = fabs(7.5);
cout << "Funcion fabs " << x << endl;

x = floor(7.5);
cout << "Funcion floor " << x << endl;

x = fabs(0.0);
cout << "Funcion fabs " << x << endl;

x = ceil(0.0);
cout << "Funcion ceil " << x << endl;

x = fabs(-6.4);
cout << "Funcion fabs " << x << endl;

x = ceil(-0.4);
cout << "Funcion ceil " << x << endl;

x = ceil(-fabs(-8 + floor(-5.5)));
cout << "Funcion ceil, fabs y floor " << x;
}


