// Ejercicio 6.55

#include <iostream>
using namespace std;

int main()
{
    enum TipoCuenta {AHORROS = 100, CHEQUES = 20, INVERSION = 3000};

    TipoCuenta Pablito;
    Pablito = AHORROS;
    TipoCuenta Carlos;
    Carlos = CHEQUES;
    TipoCuenta Paola;
    Paola = INVERSION;
    cout << "En sus ahorros, Pablito tiene: " << Pablito << endl;
    cout << "En sus cheques, Carlos tiene: " << Carlos << endl;
    cout << "En sus inversiones, Paola tiene: " << Paola << endl;
    cout << endl;
    system("pause");
}
