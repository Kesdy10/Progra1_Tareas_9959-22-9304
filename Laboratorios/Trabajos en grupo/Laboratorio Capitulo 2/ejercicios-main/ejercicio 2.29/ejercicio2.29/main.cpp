#include <iostream>

using namespace std;

int main()
{
    cout << "\n\n\tTABLA DE CUADRADOS Y CUBOS DE ENTEROS DEL 0 AL 10" << endl;
    cout << "\n\t-------------------------";
    cout << "\n\t|ENTERO|CUADRADO|CUBO   |";
    for(int c=0;c<=10;c++)
    {
            cout << "\n\t|"<< c << "\t" << (c*c) << "\t " << (c*c*c) << "\t|" << endl;
    }
    cout << "\n\t-------------------------";
    return 0;
}
