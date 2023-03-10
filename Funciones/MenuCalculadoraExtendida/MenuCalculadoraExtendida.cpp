//Fecha creeaci�n: 6 feb 2023 - autor: daguilae
//Este programa tienen como objetivo mostrar el uso de funciones a traves de una calculadora
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//Definici�n de prototipos
void menuPrincipal();
void menuOperacionesBasicas();
void menuOperacionesExtendidas();
void restar();
void multiplicar();
void dividir();
void factorial();
void numeroAlCuadrado();
void numeroAlCubo();
void raizCuadrada();
void raizCubica();
void sumar();

int main() {
    menuPrincipal();
    return 0;
}
//Implementaci�n de funciones

void menuPrincipal()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMENU CALCULADORA" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Operaciones Basicas" << endl;
        cout << "\t2. Operaciones Extendidas" << endl;
        cout << "\t3. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                menuOperacionesBasicas();
                break;
        case 2:
                menuOperacionesExtendidas();
                break;
        case 3:
                repetir = false;
                break;
        }
    } while (repetir);
}
void menuOperacionesBasicas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Basicas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Sumar dos numeros" << endl;
        cout << "\t2. Restar dos numeros" << endl;
        cout << "\t3. Multiplicar dos numeros" << endl;
        cout << "\t4. Dividir dos numeros" << endl;
        cout << "\t5. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                sumar();
                break;
        case 2:
                restar();
                break;
        case 3:
                multiplicar();
                break;
        case 4:
                dividir();
                break;
        case 5: repetir = false;
                break;
        }
    } while (repetir);
}
void menuOperacionesExtendidas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Extendidas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Factorial" << endl;
        cout << "\t2. Numero elevado al cuadrado" << endl;
        cout << "\t3. Numero elevado al cubo" << endl;
        cout << "\t4. Raiz de un numero" << endl;
        cout << "\t5. Raiz cubica de un numero" << endl;
        cout << "\t6. SALIR" << endl;
        cout << "\n\tIngrese una opci�n: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                factorial();
                break;
        case 2:
                numeroAlCuadrado();
                break;
        case 3:
                numeroAlCubo();
                break;
        case 4:
                raizCuadrada();
                break;
        case 5:
                raizCubica();
                break;
        case 6:
                repetir = false;
                break;
        }
    } while (repetir);
}

void factorial()
{
    system("cls");
    int numeroIngresado, i;
    float resultadoFactorial;
    cout << "\n\tCalculo del Factorial" << endl;
    cout << "\t\t\t-----------------" << endl;
    cout << "\n\tIngrese Numero: ";
    cin >> numeroIngresado;
    resultadoFactorial = 1;
    for (i=1; i <= numeroIngresado; i++)
    {
        resultadoFactorial = resultadoFactorial * i;
    }
    cout << "\t" << numeroIngresado << "! = " << resultadoFactorial << endl;
    system("pause>nul");
}
void numeroAlCuadrado()
{
int primerNumero;
float resultadoCuadrado;
    cout << "\n\tIngrese un N�mero: ";
    cin >> primerNumero;
    cout << "\n\t----------------------" << endl;
    resultadoCuadrado = primerNumero * primerNumero;
    cout << "\tResultado del numero elevado al cuadrado: " << resultadoCuadrado << endl;
    system("pause>nul");
}
void numeroAlCubo()
{
int primerNumero;
float resultadoCubo;
    cout << "\n\tIngrese un N�mero: ";
    cin >> primerNumero;
    cout << "\n\t----------------------" << endl;
    resultadoCubo = primerNumero * primerNumero * primerNumero;
    cout << "\tResultado del numero elevado al cubo: " << resultadoCubo << endl;
    system("pause>nul");
}
void raizCuadrada()
{
int primerNumero;
float resultadoRaiz;
    cout << "\n\tIngrese un N�mero: ";
    cin >> primerNumero;
    cout << "\n\t----------------------" << endl;
    resultadoRaiz = sqrt(primerNumero);
    cout << "\tResultado de la raiz del numero : " << resultadoRaiz << endl;
    system("pause>nul");
}
void raizCubica()
{
int primerNumero;
float resultadoRaiz;
    cout << "\n\tIngrese un N�mero: ";
    cin >> primerNumero;
    cout << "\n\t----------------------" << endl;
    resultadoRaiz = cbrt(primerNumero);
    cout << "\tResultado de la raiz cubica del numero : " << resultadoRaiz << endl;
    system("pause>nul");
}
void sumar()
{
    int primerNumero, segundoNumero;
    float resultadoSumar;
    cout << "\n\tIngrese primer N�mero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo N�mero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoSumar = primerNumero + segundoNumero;
    cout << "\tResultado de la suma: " << resultadoSumar << endl;
    system("pause>nul");
}
void restar()
{
    int primerNumero, segundoNumero;
    float resultadoRestar;
    cout << "\n\tIngrese primer N�mero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo N�mero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoRestar = primerNumero - segundoNumero;
    cout << "\tResultado de la resta: " << resultadoRestar << endl;
    system("pause>nul");
}
void multiplicar()
{
    int primerNumero, segundoNumero;
    float resultadoMultiplicar;
    cout << "\n\tIngrese primer N�mero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo N�mero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoMultiplicar = primerNumero * segundoNumero;
    cout << "\tResultado de la multiplicacion: " << resultadoMultiplicar << endl;
    system("pause>nul");
}
void dividir()
{
    int primerNumero, segundoNumero;
    float resultadoDividir;
    cout << "\n\tIngrese primer N�mero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo N�mero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    if (segundoNumero == 0)
    {
        cout << "\tSegundo numero no puede ser cero (0) ERROR" << endl;
    } else
    {
        resultadoDividir = primerNumero / segundoNumero;
        cout << "\tResultado de la division: " << resultadoDividir << endl;
    }
    system("pause>nul");
}
