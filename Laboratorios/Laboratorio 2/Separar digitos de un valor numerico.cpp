#include <iostream>

using namespace std;

int main ()
{
    int numero, residuo;

    cout<<"Introduzca un valor numerico ";
    cin>>numero;

    while (numero>0)
    {
        residuo=numero%10;
        cout<<residuo<<"   ";
        numero=numero/10;

    }
}
