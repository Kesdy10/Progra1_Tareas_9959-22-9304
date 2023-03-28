// Ejercicio 6.52

#include <iostream>
using namespace std;

int main(){
	int num1 , num2;

	cout << "Ingrese 2 numeros: " << endl;
	cin >> num1;
    cin >> num2;

    if(num1 > num2){
		cout << "El numero mayor es: " << num1;
	}
	else{
		cout << "El numero mayor es: " << num2;
	}
}
