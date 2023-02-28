#include <iostream>

using namespace std;

int main()
{
    int x,o;
    cout << "Ingrese un numero" << endl;
    cin >> x;
    o=x%2;
    if(o==0)
    {
        cout << "El numero es par";
    }
    else
    {
        cout << "El numero es impar";
    }
    return 0;
}
