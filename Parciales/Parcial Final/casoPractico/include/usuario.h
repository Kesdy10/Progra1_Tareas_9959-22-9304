//Kesdy Aaron Melgar Orellana
//9959-22-9304

#ifndef USUARIO_H
#define USUARIO_H

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

#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

using namespace std;

class usuario
{
	private:
		string nameAdministrador,passwordAdministrador;
		string ID,name,password, deportes;
		int telefono, edad;
	public:
		void menuAdministrador();
		void insertarAdministrador();
		void menuJugador();
		void insertarJugador();
		void desplegarJugador();
		void modificarJugador();
		void buscarJugador();
		void borrarJugador();
		void desplegarAplicaciones();
		void menuDeportes();
		void desplegarFutbol();
		void desplegarVolleyball();
        void desplegarHockey();
        void desplegarBasquetbol();
};

#endif // USUARIO_H
