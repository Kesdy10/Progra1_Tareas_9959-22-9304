// Ejercicio 6.19

#include <iostream>
#include<math.h>

using namespace std;

int main (){
double lado1, lado2, hip, sum;

cout << "ingresa el valor del lado 1: " << endl;
cin >> lado1;
cout << "ingresa el valor del lado 2: " << endl;
cin >> lado2;
sum = lado1 + lado2;
hip = (sqrt(sum));
cout << "El valor de la hipotenusa es: " << hip;
}
