#include "usuario.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string>
#include <vector>
#include <chrono>

#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

using namespace std;

void usuario::menuAdministrador()
{
    int Opciones;
	char x;
	do
    {
	system("cls");
    cout << "=================================================================" <<endl;
    cout << "||                  INGRESO DE ADMINISTRADOR                   ||" <<endl;
    cout << "=================================================================" <<endl;
	cout << "||               1. Ingresar Administrador                     ||"<<endl;
	cout << "||               2. Salir del sistema                          ||"<<endl;
    cout << "=================================================================" <<endl;
	cout << "||                  Opciones a escoger:[1/2]                   ||" << endl;
    cout << "=================================================================" <<endl;
	cout << "                    Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 1:
        insertarAdministrador();
		break;
	case 2:
	    system("cls");
        cout << "==========================================================" << endl;
        cout << "||             Muchas gracias, vuelva pronto            ||" << endl;
        cout << "==========================================================" << endl;
		exit(0);
	default:
        cout << "==========================================================" << endl;
        cout << "||          Opcion invalida, vuelva a intentarlo        ||" << endl;
        cout << "==========================================================" << endl;
	}
	getch();
    }while(Opciones!= 4);
}
void usuario::insertarAdministrador()
{

    vector<string> usuarios;
    vector<string> claves;

    usuarios.push_back("Kesdy");
    claves.push_back("KES");

    int contador = 0;
    bool ingresa = false;
    do
    {
        system("cls");
        fstream file;
        cout << "==========================================================" << endl;
        cout << "||          INGRESA LOS DATOS DE ADMINISTRADOR          ||" << endl;
        cout << "==========================================================" << endl;
        cout << "" << endl;
        cout << "            Usuario: ";
        cin >> nameAdministrador;

        char caracter;
        cout << "            Password: ";
        caracter = getch();
        getline(cin, passwordAdministrador);

        while (caracter != ENTER)
        {

            if (caracter != BACKSPACE)
            {
                passwordAdministrador.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (passwordAdministrador.length() > 0)
                {
                    cout << "\b \b";
                    passwordAdministrador = passwordAdministrador.substr(0, passwordAdministrador.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i] == nameAdministrador && claves[i] == passwordAdministrador)
            {
                ingresa = true;
                break;
            }
        }
        if (!ingresa)
        {
            system("cls");
            cout << "==========================================================" << endl;
            cout << "||          El Usuario/Password son incorrectos         ||" << endl;
            cout << "==========================================================" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < INTENTOS);

    if (ingresa == false)
    {
        system("cls");
        cout << "==========================================================" << endl;
        cout << "||       Haz fallado 3 veces, intentalo mas tarde       ||" << endl;
        cout << "==========================================================" << endl;
    }

    else
    {
    int Opciones;
	char x;
	do
    {
	system("cls");
	std::cout << "**=========================================================================================================**" << std::endl;
	std::cout << "||       BBBBBB   IIII   EEEEEEE  NN     NN   VV     VV   EEEEEEE   NN    NN   IIII   DDDDDD   OOOOOOO     ||" << std::endl;
    std::cout << "||       BB   BB   II    EE       NNNN   NN   VV     VV   EE        NNNN  NN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BBBBBB    II    EEEEE    NN NN  NN    VV   VV    EEEEE     NN NN NN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BB   BB   II    EE       NN   NNNN     VV VV     EE        NN  NNNN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BBBBBB   IIII   EEEEEEE  NN    NNN       V       EEEEEEE   NN   NNN   IIII   DDDDDD   OOOOOOO     ||" << std::endl;
    std::cout << "**=========================================================================================================**" << std::endl;
    std::cout << "||                              KESDY AARON MELGAR ORELLANA - 9959-22-9304                                 ||" << std::endl;
    std::cout << "**=========================================================================================================**" << std::endl;
    std::cout << std::endl;
    system("pause");

    system("cls");
    cout << "" << endl;
    cout << "\t       Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "==========================================================" << endl;
    cout << "||                  MENU DE INICIO                      ||" << endl;
    cout << "==========================================================" << endl;
    cout << "          *===============================*"                << endl;
    cout << "          |   Porfavor, elije una opcion  |"                << endl;
    cout << "          |                               |"                << endl;
    cout << "          | 1. Catalogos                  |"                << endl;
    cout << "          | 2. Procesos                   |"                << endl;
    cout << "          | 3. Informes                   |"                << endl;
    cout << "          | 4. Cerrar Sesion              |"                << endl;
    cout << "          | 5. Salir del sistema          |"                << endl;
    cout << "          |                               |"                << endl;
    cout << "          *===============================*"                << endl;
    cout << ""                                                           << endl;
    cout << "                Ingresa una Opcion: ";
    cin >> Opciones;

    switch(Opciones)
    {
    case 1:
        menuJugador();
		break;
    case 2:
        //menuProcesos();
		break;
    case 3:
        //menuInformes();
		break;
	case 4:
	    system("cls");
        cout << "==========================================================" << endl;
        cout << "||                   REDIRECCIONANDO...                  ||"<< endl;
        cout << "==========================================================" << endl;
		return;
    case 5:
        system("cls");
        cout << "==========================================================" << endl;
        cout << "||             Muchas gracias, vuelva pronto            ||" << endl;
        cout << "==========================================================" << endl;
		exit(0);
	}
	getch();
    }while(Opciones!= 5);
}
}
void usuario::menuJugador()
{
    int Opciones;
	char x;
	do
    {
	system("cls");
    cout << "" << endl;
    cout << "\t       Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "==========================================================" << endl;
    cout << "||                      NOMINA UMG                      ||" << endl;
    cout << "==========================================================" << endl;
    cout << "          *===============================*"                << endl;
    cout << "          |   Porfavor, elije una opcion  |"                << endl;
    cout << "          |                               |"                << endl;
    cout << "          | 1. Ingresar Jugador           |"                << endl;
    cout << "          | 2. Desplegar Jugador          |"                << endl;
    cout << "          | 3. Modificar Jugador          |"                << endl;
    cout << "          | 4. Buscar Jugador             |"                << endl;
    cout << "          | 5. Borrar Jugador             |"                << endl;
    cout << "          | 6. Regresar al inicio         |"                << endl;
    cout << "          | 7. Salir del sistema          |"                << endl;
    cout << "          |                               |"                << endl;
    cout << "          *===============================*"                << endl;
    cout << ""                                                           << endl;
    cout << "               Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 1:
    	do
    	{
        insertarJugador();
        cout << "==========================================================" << endl;
        cout << "||              DESEA INGRESAR OTRO JUGADOR             ||" << endl;
        cout << "==========================================================" << endl;
        cout << "==========================================================" << endl;
        cout << "||           Pulsa Y para si ||| Pulsa N para No        ||" << endl;
        cout << "==========================================================" << endl;
        cout << "                 SELECCIONA UNA RESPUESTA: ";
        cin >> x;
		}while(x == 'y'||x == 'Y');
		break;
	case 2:
		desplegarJugador();
		break;
	case 3:
		modificarJugador();
		break;
	case 4:
		buscarJugador();
		break;
	case 5:
		borrarJugador();
		break;
    case 6:
        system("cls");
        cout << "" << endl;
        cout << "\t       Nombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
        cout << "==========================================================" << endl;
        cout << "||                   REDIRECCIONANDO...                  ||"<< endl;
        cout << "==========================================================" << endl;
                break;
	case 7:
	    system("cls");
        cout << "" << endl;
        cout << "\t       Nombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
        cout << "==========================================================" << endl;
        cout << "||             Muchas gracias, vuelva pronto            ||" << endl;
        cout << "==========================================================" << endl;
        exit(0);
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 6);
}
void usuario::insertarJugador()
{
	system("cls");
	fstream file;
    cout << "" << endl;
    cout << "\t       Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "==========================================================" << endl;
    cout << "||                  AGREGAR UN JUGADOR                  ||" << endl;
    cout << "==========================================================" << endl;
	cout << "\t\t  Ingresa ID del Jugador : ";
	cin >> ID;
	cout << "\t\t  Ingresa Nombre del Jugador : ";
	cin >> name;
	cout << "\t\t  Ingresa Contrasena Jugador : ";
	cin >> password;
	cout << "\t\t  Ingresa Edad de Jugador : ";
	cin >> edad;
	cout << "\t\t  Ingresa Numero de telefono del Jugador : ";
	cin >> telefono;
	cout << "\t\t  Ingresa Deporte del Jugador : ";
	cin >> deporte;
	cout << "\t\t  Ingresa Posicion del Jugador : ";
	cin >> posicion;
	cout << "\t\t  Ingresa equipo del Jugador : ";
	cin >> equipo;
    system("cls");
    cout << "==========================================================" << endl;
    cout << "||                   JUGADOR AGREGADO                   ||" << endl;
    cout << "==========================================================" << endl;
}
void usuario::desplegarJugador()
{
	system("cls");
	fstream file;
	string ver;
	int total = 0;
    cout << "" << endl;
    cout << "\t       Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "||                                                               TABLA DE DETALLES DE JUGADOR                                                                ||" << endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "ID             NOMBRE       PASSWORD         TELEFONO         EDAD      DEPORTE     POSICION       EQUIPO " << endl;
    cout << "===============================================================================================================================================================" << endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		while(!file.eof())
		{
			total++;
			getline(file,ver);
            cout << ver << endl;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void usuario::modificarJugador()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
        cout << "==========================================================" << endl;
        cout << "||                 MODIFICAR JUGADOR                    ||" << endl;
        cout << "==========================================================" << endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{   cout << "" << endl;
	    cout << "\n\tUsuario: " << nameAdministrador << endl << endl;
		cout << "\n Ingrese ID del usuario que quiere modificar: ";
		cin >> user_ID;
		file1.open("Record.txt",ios::app | ios::out);
        file >> ID >> name >> password >> edad >> telefono >> deporte >> posicion >> equipo ;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
			 file1 << std::left << std::setw(15) << ID << std::left << std::setw(15) << name << std::left << std::setw(15) << password << std::left << std::setw(15)<< edad << std::left << std::setw(15)<< telefono << std::left << std::setw(15)<< deporte << std::left << std::setw(15)  << posicion << std::left << std::setw(15)<< equipo << "\n";
			}
			else
			{
				cout << "\t\t\tIngrese ID Persona: ";
				cin >> ID;
				cout << "\t\t\tIngrese Nombre Persona: ";
				cin >> name;
				cout << "\t\t\tIngrese Contrasena Persona: ";
				cin >> password;
				cout << "\t\t\tIngrese Telefono Persona: ";
				cin >> edad;
				cout << "\t\t\tIngrese Telefono Persona: ";
				cin >> telefono;
				cout << "\t\t\tIngrese Telefono Persona: ";
				cin >> deporte;
				cout << "\t\t\tIngrese Telefono Persona: ";
				cin >> posicion;
				cout << "\t\t\tIngrese Telefono Persona: ";
				cin >> equipo;
                file1 << std::left << std::setw(15) << ID << std::left << std::setw(15) << name << std::left << std::setw(15) << password << std::left << std::setw(15)<< edad << std::left << std::setw(15)<< telefono << std::left << std::setw(15)<< deporte << std::left << std::setw(15)  << posicion << std::left << std::setw(15)<< equipo << "\n";
				found++;
			}
                file >> ID >> name >> password >> edad >> telefono >> deporte >> posicion >> equipo;

		}
		file1.close();
		file.close();
		remove("Usuarios.txt");
		rename("Record.txt","Usuarios.txt");
	}
}
void usuario::buscarJugador()
{
	system("cls");
	fstream file;
	int found = 0;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
        cout << "==========================================================" << endl;
        cout << "||               DATOS DE JUGADOR BUSCADO              ||" << endl;
        cout << "==========================================================" << endl;
		cout << "\n\t\t\tNo hay informacion...";
	}
	else
	{
		string user_ID;
        cout << "" << endl;
        cout << "\t       Nombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
        cout << "==========================================================" << endl;
        cout << "||              DATOS DE JUGADOR BUSCADO                ||" << endl;
        cout << "==========================================================" << endl;
		cout << "\nIngrese ID de la Persona que quiere buscar: ";
		cin >> user_ID;
        file >> ID >> name >> password >> edad >> telefono >> deporte >> posicion >> equipo;
		while(!file.eof())
		{
			if(user_ID == ID)
			{
				cout << "                 *============================* "<< endl;
                cout << "                                              "<< endl;
                cout << "                   ID Jugador: "<< ID << endl;
                cout << "                   Nombre Jugador : "<< name << endl;
                cout << "                   Contrasena Jugador : "<< password << endl;
                cout << "                   Posicion Jugador : "<< posicion << endl;
                cout << "                                              "<< endl;
                cout << "                 *============================* "<< endl;
				found++;
			}
        file >> ID >> name >> password >> edad >> telefono >> deporte >> posicion >> equipo;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t Jugador no encontrado...";
		}
		file.close();
	}
}
void usuario::borrarJugador()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
		cout << ""<< endl;
        cout << "==========================================================" << endl;
        cout << "||            DETALLES DE JUGADOR A BORRAR              ||" << endl;
        cout << "==========================================================" << endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{   cout << "" << endl;
	    cout << "\n\tUsuario: " << nameAdministrador << endl << endl;
		cout << "\n Ingrese el ID del Usuario que quiere borrar: ";
		cin >> user_ID;
		file1.open("Record.txt",ios::app | ios::out);
        file >> ID >> name >> password >> edad >> telefono >> deporte >> posicion >> equipo;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
                 file1 << std::left << std::setw(15) << ID << std::left << std::setw(15) << name << std::left << std::setw(15) << password << std::left << std::setw(15)<< edad << std::left << std::setw(15)<< telefono << std::left << std::setw(15)<< deporte << std::left << std::setw(15)  << posicion << std::left << std::setw(15)<< equipo << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
        file >> ID >> name >> password >> edad >> telefono >> deporte >> posicion >> equipo;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t ID Persona no encontrado...";
		}
		file1.close();
		file.close();
		remove("Usuarios.txt");
		rename("Record.txt","Usuarios.txt");
	}
}

