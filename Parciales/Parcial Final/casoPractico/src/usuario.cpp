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
        //menuTrabajador();
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
