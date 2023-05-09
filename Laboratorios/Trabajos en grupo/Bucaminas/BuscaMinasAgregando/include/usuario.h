#ifndef USUARIO_H
#define USUARIO_H


#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class usuario
{
	private:
		string nickname,adress;
	public:
		void menu();
		void insertar();
		void desplegar();
		void buscar();
};

#endif // USUARIO_H
