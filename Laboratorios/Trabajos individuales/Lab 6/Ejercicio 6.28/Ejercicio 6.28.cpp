// Ejercicio 6.28

#include <iostream>

using namespace std;

bool PERFECTO(int x)
{
 int d;
 int suma = 0;
 for (d = 1; d < x; d++)
 {
  if (x % d == 0)
    {
   suma = suma + d;
    }
 }
 if (suma == x)
    {
  return true;
    }
 else
    {
  return false;
    }
}
int main()
{
 int x = 1000;
 cout << "Los numeros perfectos son: " << endl;
 for (int i = 1; i < x; i++)
 {
  PERFECTO(i);
  if (PERFECTO(i) == true)
    {
   cout << i << endl;
    }
 }
 return 0;
}
