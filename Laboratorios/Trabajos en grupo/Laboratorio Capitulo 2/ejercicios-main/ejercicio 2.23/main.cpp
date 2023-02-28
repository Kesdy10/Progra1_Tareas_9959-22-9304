#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,mayor,menor;
    cout << "\n\tIngrese primer Numero: ";
    cin >> a;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> b;
    cout << "\n\tIngrese tercer Numero: ";
    cin >> c;
    cout << "\n\tIngrese cuarto Numero: ";
    cin >> d;
    cout << "\n\tIngrese quinto Numero: ";
    cin >> e;
    cout << "\n\t----------------------------"<< endl;
    //a es el mayor
    if (a>b && a>c && a>d && a>e)
    {
        mayor=a;
    }
    if (a<b && a<c && a<d && a<e)
    {
        menor=a;
    }
    if (b>a && b>c && b>d && b>e)
    {
        mayor=b;
    }
    if (b<a && b<c && b<d && b<e)
    {
        menor=b;
    }
    if (c>a && c>b && c>d && c>e)
    {
        mayor=c;
    }
    if (c<a && c<b && c<d && c<e)
    {
        menor=c;
    }
    if (d>a && d>b && d>c && d>e)
    {
        mayor=d;
    }
    if (d<a && d<b && d<c && d<e)
    {
        menor=d;
    }
    if (e>a && e>b && e>c && e>d)
    {
        mayor=e;
    }
    if (e<a && e<b && e<c && e<d)
    {
        menor=e;
    }

    cout << "\tEl mayor es: " << mayor << endl;
    cout << "\tEl menor es: " << menor << endl;

    return 0;
}
