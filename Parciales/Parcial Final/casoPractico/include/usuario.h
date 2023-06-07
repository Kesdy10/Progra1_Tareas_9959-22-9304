#ifndef USUARIO_H
#define USUARIO_H

#include "usuario.h"
#include <iostream>

#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

using namespace std;

class usuario
{
	private:
		string nameAdministrador,passwordAdministrador;
		string ID,name,password,edad,deporte,posicion,equipo;
		int telefono;
	public:
		void menuAdministrador();
		void insertarAdministrador();
		void menuJugador();
		void insertarJugador();
		void desplegarJugador();
		void modificarJugador();
		void buscarJugador();
		void borrarJugador();
		void menuProcesos();
		void menuInformes();
};

#endif // USUARIO_H
