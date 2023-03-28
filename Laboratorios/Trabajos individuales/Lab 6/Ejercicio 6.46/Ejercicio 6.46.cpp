//Ejercicio 6.46

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x,y,e,f,fl,fm,l,l10,p,s,n,t;
    cout << "Ingrese 2 numeros: " << endl;
    cout << endl;
    cin >> x >> y;
    cout << endl;
    e = exp(x);
    cout << "exp(x) = " << e << endl;
    f = fabs(x);
    cout << "fabs(x) = " << f << endl;
    fl = floor(x);
    cout << "floor(x) = " << fl << endl;
    fm = fmod(x,y);
    cout << "fmod(x,y) = " << fm << endl;
    l = log(x);
    cout << "log(x) = " << l << endl;
    l10 = log10(x);
    cout << "log10(x) = " << l10 << endl;
    p = pow(x,y);
    cout << "pow(x,y)  = " << p << endl;
    s = sin(x);
    cout << "sin(x) = " << s << endl;
    n = sqrt(x);
    cout << "sqrt(x) = " << n << endl;
    t = tan(x);
    cout << "sin(x) = " << t << endl;
    return 0;
}
