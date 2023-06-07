//Kesdy Aaron Melgar Orellana
//9959-22-9304

#include "usuario.h"
#include "bitacora.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string>
#include <vector>
#include <chrono>

void bitacora::ingreso(string nombreAd, string code)
{
    fstream file;
    file.open("Bit.txt", ios::app | ios::out);
    auto now = std::chrono::system_clock::now();
    std::time_t fecha = std::chrono::system_clock::to_time_t(now);
    file << std::setw(15) << nombreAd << std::setw(15) << code << std::setw(30) << std::ctime(&fecha)<< std::setw(30);  "\n";
    file.close();
}
void bitacora::desplegarBitacora(string nombreAd, string code)
{
    system("cls");
	fstream file;
    string read;
    cout << "" << endl;
    cout << "\t\t  Nombre Administrador: " << nombreAd << endl;
    cout << "" << endl;
    cout << "=================================================================" <<endl;
    cout << "||                TABLA DE DETALLES DE JUGADOR                 ||" <<endl;
    cout << "=================================================================" <<endl;
    cout << "" << endl;
    cout << "=================================================================" <<endl;
    cout << "||    Nombre Admin       Codigo         Fecha y Hora           ||" <<endl;
    cout << "=================================================================" <<endl;
	file.open("Bit.txt",ios::in);
	if(!file)
	{
		cout << "==============================================" <<endl;
        cout << "||           No hay informacion ...         ||" <<endl;
        cout << "==============================================" <<endl;
		file.close();
	}
	else
	{
		file >> nombreAd >> code;
		while(!file.eof())
		{
            getline(file,read);
            cout << read << endl;
        }
    }
		file.close();
        void ingreso(string nameAd,string code);
}
