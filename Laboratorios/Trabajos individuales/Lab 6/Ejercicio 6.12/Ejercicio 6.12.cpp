// Ejercicio 6.12

#include <iostream>
#include <iomanip>

using namespace std;

float calculaCargo(float x);

int main()
{
    float horas1;
    float horas2;
    float horas3;
    float cargo1;
    float cargo2;
    float cargo3;
    float totalHoras;
    float totalCargo;

    cout << "Horas del automovil 1: ";
    cin >> horas1;
    cout << "Horas del automovil 2: ";
    cin >> horas2;
    cout << "Horas del automovil 3: ";
    cin >> horas3;

    cout << endl;
    cout << "Automovil" << setw(8) << "Horas" << setw(8) << "Cargo";
    cout << "" << endl;
    cout <<  setw(5) << 1;
    cargo1 = calculaCargo(horas1);
    cout << setw(5) << 2;
    cargo2 = calculaCargo(horas2);
    cout << setw(5) << 3;
    cargo3 = calculaCargo(horas3);

    totalHoras = horas1 + horas2 + horas3;
    totalCargo = cargo1 + cargo2 + cargo3;

    cout << "  Total" << setw(8) << totalHoras << setw(10) << totalCargo << endl;
    return 0;
}
float calculaCargo(float x)
{
      cout << setw(10) << x;
      if((int)x <= 3)
        {
           cout << setw(7) << 2.0;
           return 2.0;
        }
      else
        {
         if((int)x == 24){
              cout << setw(10) << 10.0;
              return 10.0;
         }
         else
         {
             cout <<  setw(9) << (((int)x - 3) * 0.5) + 2 << endl;
             return (((int)x - 3) * 0.5) + 2;
         }
      }
}
