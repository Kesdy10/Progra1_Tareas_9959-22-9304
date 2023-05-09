#include "usuario.h"

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

void usuario::menu()
{
    int Opciones;
	char x;
	do
    {
	system("cls");

	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t |   INGRESO DE USUARIOS  |" << endl;
	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t 1. Ingresar Usuarios" << endl;
	cout << "\t\t\t 2. Desplegar Usuarios" << endl;
	cout << "\t\t\t 3. Buscar Usuarios" << endl;
	cout << "\t\t\t 4. Exit" << endl;

	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t  Opciones a escoger:[1/2/3/4]" << endl;
	cout << "\t\t\t-------------------------------" << endl;
	cout << "Ingresa una Opcion: ";
    cin >> Opciones;

    switch(Opciones)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout << "\n\t\t\t Agrega otro usuario(Y,N): ";
    		cin >> x;
		}while(x == 'y'||x == 'Y');
		break;
	case 2:
		desplegar();
		break;
	case 3:
		buscar();
		break;
	case 4:
		exit(0);
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 4);
}
void usuario::insertar()
{
	system("cls");
	fstream file;
	cout << "\n------------------------------------------------------------------------------------------------------------------------";
	cout << "\n-------------------------------------------------Agregar informacion Usuario -------------------------------------------"<<endl;
	cout << "\t\t\tIngresa Usuario     : ";
	cin >> nickname;
	cout << "\t\t\tIngresa Contrasena Usuario : ";
	cin >> adress;
	file.open("ParticipantRecord.txt", ios::app | ios::out);
	file << std::setw(15) << nickname << std::left << std::setw(15) << adress << "\n";
	file.close();
}
void usuario::desplegar()
{
	system("cls");
	fstream file;
	int total = 0;
	cout << "\n-------------------------Tabla de Detalles de Usuarios -------------------------" << endl;
	file.open("ParticipantRecord.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >>  nickname >> adress;
		while(!file.eof())
		{
			total++;
			cout << "\t\t\t Nombre Usuario      : " << nickname << endl;
			file >> nickname >> adress;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void usuario::buscar()
{
	system("cls");
	fstream file;
	int found = 0;
	file.open("ParticipantRecord.txt",ios::in);
	if(!file)
	{
		cout << "\n-------------------------Datos del Usuario buscada------------------------" << endl;
		cout << "\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_nickname;
		cout << "\n-------------------------Datos del Usuario buscada------------------------"<<endl;
		cout << "\nIngrese nombre de usuario que quiere buscar: ";
		cin >> participant_nickname;
		file >> nickname >> adress;
		while(!file.eof())
		{
			if(participant_nickname == nickname)
			{
				cout << "\t\t\t Nombre usuario: " << nickname << endl;
				cout << "\t\t\t Contrasena usuario: " << adress << endl;
				found++;
			}
			file >> nickname >> adress;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t usuario no encontrado...";
		}
		file.close();
	}
}
