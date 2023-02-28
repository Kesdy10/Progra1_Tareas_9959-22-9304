// Fecha de creacion : 8 de febrero de 2022
// Nombre del autor: xx
// Deberá construir un programa que gestione las calificaciones de alumnos de un colegio de
// acuerdo con lo siguiente:
// a. Deberá utilizar menús, ciclos y funciones para realizar el programa.
// b. Deberá permitir ingresar varios alumnos por medio de un ciclo y al final presentar los
//    promedios de las notas de cada curso y de los alumnos.
// c. Deberá ingresar los nombres y apellidos de los alumnos.
// d. Deberá ingresar las notas correspondientes a 5 cursos por alumno.
// e. Deberá desplegar los totales y promedio de notas de cada alumno.

#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float nota5;
};

struct Alumno{
	char nombre[50];
	char apellido[50];
	struct Promedio prom;
}alumnos[100];

int main(){
	int n_alumnos,posM=0;
	float promedio_alumno[100],mayor=0;
    cout << "-------------------------------" << endl;
    cout << "        LABORATORIO 1" << endl;
    cout << "      NOTAS Y PROMEDIOS" << endl;
    cout << "-------------------------------" << endl;
    cout << "\n";
	cout<<"Digite el numero de alumnos: ";
	cin>>n_alumnos;

	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(alumnos[i].nombre,50,'\n');
		cout<<"apellido: "; cin.getline(alumnos[i].apellido,50,'\n');

		cout<<".:Notas de los cursos:."<<endl;
		cout<<"Nota1: "; cin>>alumnos[i].prom.nota1;
		cout<<"Nota2: "; cin>>alumnos[i].prom.nota2;
		cout<<"Nota3: "; cin>>alumnos[i].prom.nota3;
		cout<<"Nota4: "; cin>>alumnos[i].prom.nota4;
		cout<<"Nota5: "; cin>>alumnos[i].prom.nota5;

		//Sacando el promedio del alumno
		promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3+alumnos[i].prom.nota4+alumnos[i].prom.nota5)/5;
		cout << "El promedio de este alumno en todos sus cursos es de : "<< promedio_alumno[i] << endl;
        cout<<"\n";
	}


	getch();
	return 0;
}
