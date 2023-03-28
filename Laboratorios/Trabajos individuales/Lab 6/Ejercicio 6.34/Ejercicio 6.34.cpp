// Ejercicio 6.34

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
int num, dato;
bool repetir = true;
char res = 's';
do{
        system("cls");
		cout << "Tengo un numero entre 1 y 1000" << endl;
        cout << "Puedes adivinar mi numero?" << endl;
        cout << "Por favor escribe tu primera respuesta. ";

	srand(time(NULL));
	dato = 1 + rand()%(1001-1);
	do{
        cin >> num;
		if(num > dato){
			cout << "Demasiado alto. Intenta de nuevo." << endl;
		}
		else if(num<dato){
			cout << "Demasiado bajo. Intenta de nuevo." << endl;
		}
	}while(num != dato);

	cout<<"Excelente! Adivinaste el numero!"<<endl;
    cout << "Te gustaria jugar de nuevo (s/n)? " << endl;
    cin >> res;
    if (res == 's')
    {
        repetir = true;
    }
    else
    {
        repetir = false;
    }
    }while (repetir);
	return 0;
}
