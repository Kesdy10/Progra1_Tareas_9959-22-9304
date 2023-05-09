#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string>
#include <vector>

#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

using namespace std;

class usuario
{
	private:
		string IDAdministrador,nameAdministrador,passwordAdministrador;
		string ID,name,password;
		int salario,cantidadHoras, valorHoras, totalHoras,adelantos;
		double IGSS, IRTRA, salarioNeto;
	public:
		void menuAdministrador();
		void insertarAdministrador();
		void desplegarAdministrador();
		void buscarAdministrador();
		void menuTrabajador();
		void insertarTrabajador();
		void desplegarTrabajador();
		void modificarTrabajador();
		void buscarTrabajador();
		void borrarTrabajador();
};
void usuario::menuAdministrador()
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
        insertarAdministrador();
		break;
	case 2:
		desplegarAdministrador();
		break;
	case 3:
		buscarAdministrador();
		break;
	case 4:
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
		exit(0);
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 4);
}
void usuario::insertarAdministrador()
{
    vector<string> IDs;
    vector<string> usuarios;
    vector<string> claves;

    IDs.push_back("10");
    IDs.push_back("20");
    IDs.push_back("30");
    IDs.push_back("40");

    usuarios.push_back("Kesdy");
    usuarios.push_back("Erick");
    usuarios.push_back("Julio");
    usuarios.push_back("Javier");

    claves.push_back("KES");
    claves.push_back("ERI");
    claves.push_back("JUL");
    claves.push_back("JAV");

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
        cin >> IDAdministrador;
        cout << "\n\tUsuario: ";
        cin >> nameAdministrador;

        char caracter;
        cout << "\tPassword: ";
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
            if (IDs[i] == IDAdministrador && usuarios[i] == nameAdministrador && claves[i] == passwordAdministrador)
            {
                ingresa = true;
                file.open("ParticipantRecord.txt", ios::app | ios::out);
                file << std::setw(15) << IDAdministrador << std::setw(15) << nameAdministrador << std::setw(15) << passwordAdministrador << "\n";
                file.close();
                break;
            }
        }
        if (!ingresa)
        {
            cout << "\n\n\tEl Administrador y/o password son incorrectos" << endl;
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
    cout << "######  ### ####### #     # #     # ####### #     # ### ######  ####### " << endl;
    cout << "#     #  #  #       ##    # #     # #       ##    #  #  #     # #     # " << endl;
    cout << "#     #  #  #       # #   # #     # #       # #   #  #  #     # #     # " << endl;
    cout << "######   #  #####   #  #  # #     # #####   #  #  #  #  #     # #     # " << endl;
    cout << "#     #  #  #       #   # #  #   #  #       #   # #  #  #     # #     # " << endl;
    cout << "#     #  #  #       #    ##   # #   #       #    ##  #  #     # #     # " << endl;
    cout << "######  ### ####### #     #    #    ####### #     # ### ######  ####### " << endl;
    cout << "\n\t\t\tHola, " << nameAdministrador << " es un gusto verte por aca de nuevo"<< endl;
    system("pause");
    system("cls");
    cout << "" << endl;
    cout << "\n\n\t\tID Administrador: " << IDAdministrador << endl;
    cout << "\t\tNombre Administrador: " << nameAdministrador << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |            MENU DE INICIO           | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
    cout << "\        -------------------------------------------------"<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                 |   Porfavor, elije una opcion  |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 | 1. Menu Trabajadores          |"<< endl;
    cout << "                 | 2. Informes                   |"<< endl;
    cout << "                 | 3. Salir del sistema          |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 |      Ingresa una Opcion       |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 *===============================*"<< endl;
    cin >> Opciones;

    switch(Opciones)
    {
    case 1:
    	do
    	{
    		menuTrabajador();
    		cout << "\n\t\t\t Agrega otro trabajador (Y,N): ";
    		cin >> x;
		}while(x == 'y'||x == 'Y');
		break;
		break;
	case 2:
        desplegarTrabajador();
		break;
	case 3:
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
		exit(0);
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 3);
}
}
void usuario::desplegarAdministrador()
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
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		file >> IDAdministrador >> nameAdministrador >> passwordAdministrador;
		while(!file.eof())
		{
		    //Despliega al usuario y sus datos
			total++;
			cout << "\n\n\t\t\t ID Administrador: " << IDAdministrador << endl;
			cout << "\t\t\t Nombre Administrador: " << nameAdministrador << endl;
			cout << "\t\t\t Contrasena Administrador: " << passwordAdministrador <<endl;
			file >> IDAdministrador >> nameAdministrador >> passwordAdministrador;
		}
		if(total == 0)
		{   //Por si aun no hay datos ingresados
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void usuario::buscarAdministrador()
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
		file >> IDAdministrador >> nameAdministrador >> passwordAdministrador;
		while(!file.eof())
		{
			if(participant_ID == IDAdministrador)
			{
			    //Mostrara los datos de usuario que ingresamos mediante el ID
				cout << "\n\n\t\t\t ID Administrador: " << IDAdministrador << endl;
				cout << "\t\t\t Nombre Administrador: " << nameAdministrador << endl;
				cout << "\t\t\t Contrasena Administrador: " << passwordAdministrador << endl;
				found++;
			}
			file >> IDAdministrador >> nameAdministrador >> passwordAdministrador;
		}
		if(found == 0)
		{
		    //Por si el ID es incorrecto
			cout<<"\n\t\t\t Administrador no encontrado...";
		}
		file.close();
	}
}
void usuario::menuTrabajador()
{
    int Opciones;
	char x;
	do
    {
    system("cls");
    cout << "888b      88    ,ad8888ba,    88b           d88  88  888b      88         db               "<< endl;
    cout << "8888b     88   d8'    `''8b   888b         d888  88  8888b     88        d88b              "<< endl;
    cout << "88 `8b    88  d8'        `8b  88`8b       d8'88  88  88 `8b    88       d8'`8b             "<< endl;
    cout << "88  `8b   88  88          88  88 `8b     d8' 88  88  88  `8b   88      d8'  `8b            "<< endl;
    cout << "88   `8b  88  88          88  88  `8b   d8'  88  88  88   `8b  88     d8YaaaaY8b           "<< endl;
    cout << "88    `8b 88  Y8,        ,8P  88   `8b d8'   88  88  88    `8b 88    d8''''''''8b          "<< endl;
    cout << "88     `8888   Y8a.    .a8P   88    `888'    88  88  88     `8888   d8'        `8b         "<< endl;
    cout << "88      `888    `'Y8888Y'     88     `8'     88  88  88      `888  d8'          `8b        "<< endl;
    cout << "                                                                                           "<< endl;
    cout << "                                                                                           "<< endl;
    cout << "             88        88  88b           d88    ,ad8888ba,                                 "<< endl;
    cout << "             88        88  888b         d888   d8''    `'8b                                "<< endl;
    cout << "             88        88  88`8b       d8'88  d8'                                          "<< endl;
	cout << "             88        88  88 `8b     d8' 88  88                                           "<< endl;
	cout << "             88        88  88  `8b   d8'  88  88      88888                                "<< endl;
	cout << "             88        88  88   `8b d8'   88  Y8,        88                                "<< endl;
	cout << "             Y8a.    .a8P  88    `888'    88   Y8a.    .a88                                "<< endl;
	cout << "             `''Y8888Y''   88     `8'     88   `''Y88888P''                                "<< endl;
    cout << "                                                                                           "<< endl;
	system("pause");
	system("cls");
    cout << "\n\n\t\t\tID Administrador: " << IDAdministrador << endl;
    cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |            MENU DE INICIO           | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
    cout << "\        -------------------------------------------------"<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                 |   Porfavor, elije una opcion  |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 | 1. Ingresar Trabajador        |"<< endl;
    cout << "                 | 2. Desplegar Trabajador       |"<< endl;
    cout << "                 | 3. Modificar Trabajador       |"<< endl;
    cout << "                 | 4. Buscar Trabajador          |"<< endl;
    cout << "                 | 5. Borrar Trabajador          |"<< endl;
    cout << "                 | 6. Exit                       |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 | Ingresa una Opcion            |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 *===============================*"<< endl;
    cin >> Opciones;

    switch(Opciones)
    {
    case 1:
    	do
    	{
    		insertarTrabajador();
    		cout << "          __^__                                     __^__"<< endl;
            cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
            cout << "          | / |                                     | / |"<< endl;
            cout << "          | / |  Desea gregar un nuevo trabajador?  | / |"<< endl;
            cout << "          |___|               (Y,N)                 |___|"<< endl;
            cout << "          |___|                                     |___|"<< endl;
            cout << "         (_____)-----------------------------------(_____)"<< endl;
    		cin >> x;
		}while(x == 'y'||x == 'Y');
		break;
	case 2:
		desplegarTrabajador();
		break;
	case 3:
		modificarTrabajador();
		break;
	case 4:
		buscarTrabajador();
		break;
	case 5:
		borrarTrabajador();
		break;
	case 6:
	    system("cls");
        cout << "\n\n\t\t\tID Administrador: " << IDAdministrador << endl;
        cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
		exit(0);
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 6);
}
void usuario::insertarTrabajador()
{
	system("cls");
	fstream file;
    cout << "\n\n\t\t\tID Administrador: " << IDAdministrador << endl;
    cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |    Agregar informacion Trabajador   | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	cout << "\t\t  Ingresa ID del trabajador : ";
	cin >> ID;
	cout << "\t\t  Ingresa Nombre del trabajor : ";
	cin >> name;
	cout << "\t\t  Ingresa Contrasena Trabajador : ";
	cin >> password;
	cout << "\t\t  Ingresa El salario del trabajador : ";
	cin >> salario;
	cout << "\t\t  Ingresa las horas extras trabajadas : ";
	cin >> cantidadHoras;
	cout << "\t\t  Ingresa el valor de las extras trabajadas : ";
	cin >> valorHoras;
    totalHoras = cantidadHoras*valorHoras;
    cout << "\t\t  Ingresa el valor del adelanto : ";
    cin >> adelantos;
    cout << "\t\t Listo! nuevo trabajador agregado"<< endl;
    IGSS = (salario+totalHoras)*(0.483);
    IRTRA = (salario+totalHoras)*(0.10);
    salarioNeto=(salario+totalHoras)+(IGSS+IRTRA);

	file.open("Usuarios.txt", ios::app | ios::out);
	file << std::left << std::setw(15) << ID << std::left << std::setw(15) << name << std::left << std::setw(15) << password << std::left << std::setw(15) << salario << std::left << std::setw(15) << cantidadHoras << std::setw << std::setw(15) << IGSS << std::left << std::setw(15) << IRTRA << std::left << std::setw(15) << salarioNeto << std::setw << std::setw(15) << adelantos << "\n";
	file.close();
}
void usuario::desplegarTrabajador()
{
	system("cls");
	fstream file;
	int total = 0;
    cout << "\n\n\t\t\tID Administrador: " << IDAdministrador << endl;
    cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
	cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |   Tabla de Detalles de Trabajador   | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		file >> ID >> name >> password >> salario >> cantidadHoras >> IGSS >> IRTRA >> salarioNeto >>adelantos ;
		while(!file.eof())
		{
			total++;
			cout << "                 *============================* "<< endl;
            cout << "                                              "<< endl;
            cout << "                   ID Trabajador: "<< ID << endl;
            cout << "                   Nombre Trabajador : "<< name << endl;
            cout << "                   Contrasena Trabajador : "<< password << endl;
            cout << "                   Salario : Q"<< salario << endl;
            cout << "                   Pago de IGSS : Q"<< IGSS << endl;
            cout << "                   Pago de IRTRA: Q"<< IRTRA << endl;
            cout << "                   Cantidad de horas extras: "<< cantidadHoras << endl;
            cout << "                   Total de adelantos: Q"<< adelantos << endl;
            cout << "                   Total de las horas extras: Q"<< totalHoras << endl;
            cout << "                   Salario Neto : Q"<< salarioNeto << endl;
            cout << "                                              "<< endl;
            cout << "                 *============================* "<< endl;
			file >> ID >> name >> password >> salario >> cantidadHoras >> IGSS >> IRTRA >> salarioNeto >>adelantos ;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
void usuario::modificarTrabajador()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
    cout << "\n\n\t\t\tID Administrador: " << IDAdministrador << endl;
    cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
	cout << "          __^__                                     __^__"<< endl;
	cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |   Modificacion Detalles Trabajador  | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout << "\n Ingrese ID del Trabajador que quiere modificar: ";
		cin >> user_ID;
		file1.open("Personas.txt",ios::app | ios::out);
		file >> ID >> name >> password;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
			 file1 << std::left << std::setw(15) << ID << std::left << std::setw(15) << name <<std::left << std::setw(15) << password << "\n";
			}
			else
			{
				cout << "\t\t\tIngrese ID Trabajador: ";
				cin >> ID;
				cout << "\t\t\tIngrese Nombre Trabajador: ";
				cin >> name;
				cout << "\t\t\tIngrese Contrasena Trabajador: ";
				cin >> password;
				file1 << std::left << std::setw(15)<< ID << std::left << std::setw(15) << name <<std::left << std::setw(15) << password << "\n";
				found++;
			}
			file >> ID >> name >> password;

		}
		file1.close();
		file.close();
		remove("Usuarios.txt");
		rename("Personas.txt","Usuarios.txt");
	}
}
void usuario::buscarTrabajador()
{
	system("cls");
	fstream file;
	int found = 0;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{

		cout << "\n-------------------------Datos del Trabajador buscada------------------------" << endl;
		cout << "\n\t\t\tNo hay informacion...";
	}
	else
	{
		string user_ID;
        cout << "\n\n\t\t\tID Administrador: " << IDAdministrador << endl;
        cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
		cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Datos del Trabajador buscad     | / |"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
		cout << "\nIngrese ID de la Persona que quiere buscar: ";
		cin >> user_ID;
		file >> ID >> name >> password;
		while(!file.eof())
		{
			if(user_ID == ID)
			{
				cout << "                 *============================* "<< endl;
                cout << "                                              "<< endl;
                cout << "                   ID Trabajador: "<< ID << endl;
                cout << "                   Nombre Trabajador : "<< name << endl;
                cout << "                   Contrasena Trabajador : "<< password << endl;
                cout << "                   Salario : Q"<< salario << endl;
                cout << "                   Pago de IGSS : Q"<< IGSS << endl;
                cout << "                   Pago de IRTRA: Q"<< IRTRA << endl;
                cout << "                   Cantidad de horas extras: "<< cantidadHoras << endl;
                cout << "                   Total de adelantos: Q"<< adelantos << endl;
                cout << "                   Total de las horas extras: Q"<< totalHoras << endl;
                cout << "                   Salario Neto : Q"<< salarioNeto << endl;
                cout << "                                              "<< endl;
                cout << "                 *============================* "<< endl;
				found++;
			}
			file >> ID >> name >> password;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t Trabajador no encontrado...";
		}
		file.close();
	}
}
void usuario::borrarTrabajador()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
    cout << "\n\n\t\t\tID Administrador: " << IDAdministrador << endl;
    cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
	cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |    Detalles Trabajador a Borrar     | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	file.open("Usuarios.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout << "\n Ingrese el ID del Trabajador que quiere borrar: ";
		cin >> user_ID;
		file1.open("Personas.txt",ios::app | ios::out);
		file >> ID >> name >> password;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
				file1 << std::left << std::setw(15) << ID <<std::left<<std::setw(15) << name <<std::left << std::setw(15) << password << "\n";file << std::left << std::setw(15) << ID << std::left << std::setw(15) << name << std::left << std::setw(15) << password << std::left << std::setw(15) << salario << std::left << std::setw(15) << cantidadHoras << std::setw << std::setw(15) << IGSS << std::left << std::setw(15) << IRTRA << std::left << std::setw(15) << salarioNeto << std::setw << std::setw(15) << adelantos << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> ID >> name >> password;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t ID Trabajador no encontrado...";
		}
		file1.close();
		file.close();
		remove("Usuarios.txt");
		rename("Personas.txt","Usuarios.txt");
	}
}
main()
{
	usuario Prototipo;
	Prototipo.menuAdministrador();
	return 0;
}
