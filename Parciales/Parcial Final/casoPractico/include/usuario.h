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
