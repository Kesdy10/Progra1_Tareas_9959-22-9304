// Ejercicio 6.30

#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main ()
{
    int num;
    cout << "Ingrese un numero: " << endl;
    cin >> num;
    while (num >= 10){
    cout << ("%d", num % 10);
    num /= 10;
    }
    cout << ("%d", num);
}
