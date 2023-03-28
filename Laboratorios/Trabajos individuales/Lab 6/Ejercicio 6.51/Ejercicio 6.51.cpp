// Ejercicio 6.51

#include <iostream>
using namespace std;

int main(){
	int num1 , num2;

	cout << "Ingrese 2 numeros: " << endl;
	cin >> num1;
    cin >> num2;

    if(num1 < num2){
		cout << "El numero menor es: " << num1;
	}
	else{
		cout << "El numero menor es: " << num2;
	}
}
