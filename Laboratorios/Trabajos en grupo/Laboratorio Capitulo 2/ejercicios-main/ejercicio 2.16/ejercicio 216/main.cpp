#include <iostream>

using namespace std;

int main()
{
    int x,y;
    float s,r,m,c;
    cout << "\n\tIngrese primer Numero: ";
    cin >> x;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> y;
    s= x+y;
    cout << "\tResultado de la suma. " << s << endl;
    r= x-y;
    cout << "\tResultado de la resta. " << r << endl;
    m= x*y;
    cout << "\tResultado de la multplicacion. " << m << endl;
    c= x/y;
    cout << "\tResultado de la division. " << c << endl;
}
