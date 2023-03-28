//Ejercicio 6.39

#include <iostream>

using namespace std;

void Jugada(int disco,int torre1,int torre2, int torre3)
{
    if(disco == 1)
    {
       cout << "Mover disco " << disco <<" de la torre " << torre1 << " hacia la torre " << torre3 << endl;
    }
    else
    {
        Jugada(disco-1, torre1,torre3,torre2);
        cout << "Mover disco " << disco << " de la torre " << torre1 <<" hacia la torre "<< torre3 <<endl;
        Jugada(disco-1, torre2,torre1,torre3);
    }
}
int main()
{
    char res;
    do{
    system("cls");
    int Torre1 = 1, Torre2 = 2, Torre3 = 3, Disco = 0;
    cout << "Con cuantos discos quiere jugar? " << endl;
    cin >> Disco;
    Jugada(Disco,Torre1,Torre2,Torre3);
    cout << endl;
    cout << "Desea volver a jugar? s/n";
    cin >> res;
    }while(res == 'S');
    return 0;
}
