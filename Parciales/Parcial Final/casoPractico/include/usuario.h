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
	public:
		void menuAdministrador();
		void insertarAdministrador();
		void menuTrabajador();
		void menuProcesos();
		void menuInformes();
};

#endif // USUARIO_H
