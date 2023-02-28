// Ejercicio 3.15 del libro
// Clase Fecha
#include <iostream>
#include <stdlib.h>

using namespace std;

class Fecha{
    private: //Atributos
        int dia,mes,anio;
    public: //Metodos
        Fecha(int,int,int);
        void mostrarFecha();
};

//Constructor
Fecha::Fecha(int mdia, int mmes, int manio)
{
    dia = mdia;
    mes = mmes;
    anio = manio;
}

void Fecha::mostrarFecha()
{
    cout << "" << endl;
    cout << "La fecha del dia de hoy es: " << dia << "/" << mes << "/" << anio << endl;
    cout << "" << endl;
}

int main()
{
    Fecha fechaActual(26,02,2023);
    fechaActual.mostrarFecha();


    system("pause");
    return 0;
}
