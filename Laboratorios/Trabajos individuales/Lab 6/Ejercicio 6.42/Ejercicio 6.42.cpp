// Ejercicio 6.42

#include <iostream>
#include <math.h>

using namespace std;

int main(){
float x1, x2, y1, y2, distancia;
cout << "Ingrese la coordenada x1: " << endl;
cin >> x1;
cout << "Ingrese la coordenada x2: " << endl;
cin >> x2;
cout << "Ingrese la coordenada y1: " << endl;
cin >> y1;
cout << "Ingrese la coordenada y2: " << endl;
cin >> y2;
distancia = sqrt(pow((x2-x1),2) + pow ((y2-y1),2));
cout << "La distancia es: " << distancia << endl;
}
