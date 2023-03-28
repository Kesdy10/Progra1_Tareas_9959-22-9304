//Ejercicio 6.25

#include <iostream>

using namespace std;

int main()
{
    int hora,minu,seg,fhora,fminu,fseg;
    cout << "Ingrese las horas transcurridas" << endl;
    cin >> hora;
    cout << "Ingrese los minutos transcurridos" << endl;
    cin >> minu;
    cout << "Ingrese los segundos transcurridos" << endl;
    cin >> seg;
    if (hora > 12 || minu > 60 || seg > 60)
    {
        cout << "valores fuera de rango";
    }
    else
    {
        if(seg == 60)
        {
            minu = minu + 1;
            seg = 0;
        }
        if(minu == 60)
        {
            hora = hora + 1;
            minu = 0;
        }
        if(hora == 12)
        {
            hora = 0;
        }
        fseg = hora * 3600 + minu * 60 + seg;
        cout << "Han pasado: " << fseg << " Segundos" << endl;
    }
}
