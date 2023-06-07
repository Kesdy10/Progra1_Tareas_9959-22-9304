// Parcial 2 de programacion 1
// 9959-22-9304
// Melgar Orellana, Kesdy Aaron
// 19/04/2023

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <string>
#include <vector>

#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

//indispensable
using namespace std;

class usuario
{
	private:
		string ID,name,password;
		string ID2,name2;
	public:
		void menu();
		void insertar();
		void desplegar();
		void buscar();
		void catalogo();
		void altas();
		void bajas();
		void modificar();
		void consultar();
		void informes();
};
void usuario::menu()
{
    int Opciones;
	char x;
	do
    {
	system("cls");
	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t |   INGRESO DE ADMINISTRADOR  |" << endl;
	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t 1. Ingresar Administrador" << endl;
	cout << "\t\t\t 2. Desplegar Administrador" << endl;
	cout << "\t\t\t 3. Buscar Administrador" << endl;
	cout << "\t\t\t 4. Salir del sistema" << endl;

	cout << "\t\t\t--------------------------------" << endl;
	cout << "\t\t\t  Opciones a escoger:[1/2/3/4]  " << endl;
	cout << "\t\t\t--------------------------------" << endl;
	cout << "Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 1:
        insertar();
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
    vector<string> IDs;
    vector<string> usuarios;
    vector<string> claves;

    IDs.push_back("9959-22-9304");

    usuarios.push_back("Kesdy");

    claves.push_back("KES");

    int contador = 0;
    bool ingresa = false;
    do
    {
        system("cls");
        fstream file;
        cout << "\n------------------------------------------------------------------------------------------------------------------------";
        cout << "\n-------------------------------------------------Agregar informacion Administrador -------------------------------------------" <<endl;
        cout << "\t\t\tIngresa Usuario";
        cout << "\n\tID: ";
        cin >> ID;
        cout << "\n\tUsuario: ";
        cin >> name;

        char caracter;
        cout << "\tPassword: ";
        caracter = getch();
        getline(cin, password);

        while (caracter != ENTER)
        {

            if (caracter != BACKSPACE)
            {
                password.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (IDs[i] == ID && usuarios[i] == name && claves[i] == password)
            {
                ingresa = true;
                file.open("ParticipantRecord.txt", ios::app | ios::out);
                file << std::setw(15) << ID << std::setw(15) << name << std::setw(15) << password << "\n";
                file.close();
                break;
            }
        }
        if (!ingresa)
        {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < INTENTOS);

    if (ingresa == false)
    {
        cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
    }
    else
    {
    int Opciones;
	char x;
	do
    {
	system("cls");

    cout << "\n\n\t\t\tID Administrador: " << ID << endl;
    cout << "\t\t\tNombre Administrador: " << name << endl;
    cout << "" << endl;
	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t |   MENU GENERAL  |" << endl;
	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t 1. Catalogos" << endl;
	cout << "\t\t\t 2. Informes" << endl;
	cout << "\t\t\t 3. Salir del sistema" << endl;

	cout << "\t\t\t--------------------------------" << endl;
	cout << "\t\t\tOpciones a escoger:[1/2/3/4/5/6]" << endl;
	cout << "\t\t\t--------------------------------" << endl;
	cout << "Ingresa una Opcion: ";
    cin >> Opciones;

    switch(Opciones)
    {
    case 1:
    	do
    	{
    		catalogo();
    		cout << "\n\t\t\t Agrega otro usuario(Y,N): ";
    		cin >> x;
		}while(x == 'y'||x == 'Y');
		break;
		break;
	case 2:
		informes();
		break;
	case 3:
		return;
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 3);
}
}
void usuario::desplegar()
// Abre la funcion par desplegar usuarios ingresados
{
	system("cls");
	fstream file;
	int total = 0;
	cout << "\n-------------------------Tabla de Detalles de Administrador -------------------------" << endl;
	//Ingresa al documento txt
	file.open("ParticipantRecord.txt",ios::in);
	if(!file)
	{   // Por si ono hay datos almacenados
		cout << "\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> ID >> name >> password;
		while(!file.eof())
		{
		    //Despliega al usuario y sus datos
			total++;
			cout << "\n\n\t\t\t ID Administrador: " << ID << endl;
			cout << "\t\t\t Nombre Administrador: " << name << endl;
			cout << "\t\t\t Contrasena Administrador: " << password <<endl;
			file >> ID >> name >> password;
		}
		if(total == 0)
		{   //Por si aun no hay datos ingresados
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void usuario::buscar()
// Abre la funcion par buscar algun usuario ingresado
{
	system("cls");
	fstream file;
	int found = 0;
	//Ingresa al documento txt
	file.open("ParticipantRecord.txt",ios::in);
	if(!file)
	{   // Por si existe un error
		cout << "\n-------------------------Datos del Administrador------------------------" << endl;
		cout << "\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_ID;
		cout << "\n-------------------------Datos del Administrador buscada------------------------"<<endl;
		cout << "\nIngrese ID del Administrador que quiere buscar: ";
		// Identificamos al usuario por medio de su ID
		cin >> participant_ID;
        // Encontrara al usuario
		file >> ID >> name >> password;
		while(!file.eof())
		{
			if(participant_ID == ID)
			{
			    //Mostrara los datos de usuario que ingresamos mediante el ID
				cout << "\n\n\t\t\t ID Administrador: " << ID << endl;
				cout << "\t\t\t Nombre Administrador: " << name << endl;
				cout << "\t\t\t Contrasena Administrador: " << password << endl;
				found++;
			}
			file >> ID >> name >> password;
		}
		if(found == 0)
		{
		    //Por si el ID es incorrecto
			cout<<"\n\t\t\t Administrador no encontrado...";
		}
		file.close();
	}
}
void usuario::catalogo()
{
    int Opciones;
	char x;
	do
    {
	system("cls");

	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t |   INGRESO DE USUARIOS  |" << endl;
	cout << "\t\t\t-------------------------------" << endl;
	cout << "\t\t\t 1. 1 Altas" << endl;
	cout << "\t\t\t 2. 2 Bajas"<<endl;
	cout << "\t\t\t 3. 3 Modificar" << endl;
	cout << "\t\t\t 4. 4 Consultar" << endl;
	cout << "\t\t\t 5. Volver" << endl;

	cout << "\t\t\t--------------------------------" << endl;
	cout << "\t\t\tOpciones a escoger:[1/2/3/4/5/6]" << endl;
	cout << "\t\t\t--------------------------------" << endl;
	cout << "Ingresa una Opcion: ";
    cin >> Opciones;

    switch(Opciones)
    {
    case 1:
    	do
    	{
    		altas();
    		cout << "\n\t\t\t Agrega otro producto(Y,N): ";
    		cin >> x;
		}while(x == 'y'||x == 'Y');
		break;
		break;
	case 2:
		bajas();
		break;
	case 3:
		modificar();
		break;
	case 4:
	    consultar();
		break;
	case 5:
		return;
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 6);
}
void usuario::altas()
{
	system("cls");
	fstream file;
    cout << "\n\n\t\t\tID Administrador: " << ID << endl;
    cout << "\t\t\tNombre Administrador: " << name << endl;
    cout << "" << endl;
	cout << "\n------------------------------------------------------------------------------------------------------------------------";
	cout << "\n-------------------------------------------------  Submenu de producto   -------------------------------------------"<<endl;
	cout << "\t\t\tIngresa ID producto         : ";
	cin >> ID2;
	cout << "\t\t\tIngresa Nombre Producto     : ";
	cin >> name2;
	file.open("ParticipantRecord1.txt", ios::app | ios::out);
    file << std::setw(15) << ID2 << std::setw(15) << name2 << std::setw(15) << "\n";
	file.close();
}
void usuario::bajas()
{
	system("cls");
	fstream file,file1;
	string participant_ID;
	int found = 0;
	cout << "\n-------------------------Detalles producto a Borrar-------------------------" << endl;
	file.open("ParticipantRecord1.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout << "\n Ingrese el ID del producto que quiere borrar: ";
		cin >> participant_ID;
		file1.open("Record.tx1t",ios::app | ios::out);
		file >> ID >> name >> password;
		while(!file.eof())
		{
			if(participant_ID!=ID)
			{
				file1 << std::left << std::setw(15) << ID <<std::setw(15) << name<< "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> ID >> name;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t ID producto no encontrado...";
		}
		file1.close();
		file.close();
		remove("ParticipantRecord1.txt");
		rename("Record.txt1","ParticipantRecord1.txt");
	}
}
void usuario::modificar()
{
	system("cls");
	fstream file,file1;
	string participant_ID;
	int found = 0;
    cout << "\n\n\t\t\tID Administrador: " << ID << endl;
    cout << "\t\t\tNombre Administrador: " << name << endl;
    cout << "" << endl;
	cout << "\n-------------------------Modificacion Detalles producto-------------------------"<<endl;
	file.open("ParticipantRecord1.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout << "\n Ingrese ID del producto que quiere modificar: ";
		cin >> participant_ID;
		file1.open("Record1.txt",ios::app | ios::out);
		file >> ID >> name >> password;
		while(!file.eof())
		{
			if(participant_ID!=ID)
			{
			 file1 << std::setw(15) << ID2 << std::setw(15) << name2 << "\n";
			}
			else
			{
				cout << "\t\t\tIngrese ID producto: ";
				cin >> ID;
				cout << "\t\t\tIngrese Nombre producto: ";
				cin >> name;
				file1 << std::setw(15)<< ID << std::setw(15) << name << "\n";
				found++;
			}
			file >> ID >> name;

		}
		file1.close();
		file.close();
		remove("ParticipantRecord1.txt");
		rename("Record1.txt","ParticipantRecord1.txt");
	}
}
void usuario::consultar()
{
	system("cls");
	fstream file;
	int total = 0;
    cout << "\n\n\t\t\tID Administrador: " << ID << endl;
    cout << "\t\t\tNombre Administrador: " << name << endl;
    cout << "" << endl;
	cout << "\n-------------------------Tabla de Detalles de producto -------------------------" << endl;
	file.open("ParticipantRecord1.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> ID2 >> name2;
		while(!file.eof())
		{
			total++;
			cout << "\n\n\t\t\t ID producto: " << ID2 << endl;
			cout << "\t\t\t Nombre producto: " << name2 << endl;
			file >> ID2 >> name2;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void usuario::informes()
{
	system("cls");
	fstream file;
	int total = 0;
    cout << "\n\n\t\t\tID Administrador: " << ID << endl;
    cout << "\t\t\tNombre Administrador: " << name << endl;
    cout << "" << endl;
	cout << "\n-------------------------Tabla de Detalles de Usuarios -------------------------" << endl;
	file.open("ParticipantRecord1.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> ID2 >> name2;
		while(!file.eof())
		{
			total++;
			cout << "\n\n\t\t\t ID producto: " << ID2 << endl;
			cout << "\t\t\t Nombre producto: " << name2 << endl;
			file >> ID2 >> name2;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
main()
{
	usuario Parcial2;
	Parcial2.menu();
	return 0;
}
