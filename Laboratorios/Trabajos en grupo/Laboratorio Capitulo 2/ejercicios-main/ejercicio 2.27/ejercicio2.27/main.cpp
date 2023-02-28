#include <iostream>

using namespace std;

int main()
{
    char letra;
    cout << "Ingrese caracter: " << endl;
    cin >> letra;
    cout << "Su equivalente entero es de: " << static_cast <int> (letra)<< endl;
    return 0;
}
