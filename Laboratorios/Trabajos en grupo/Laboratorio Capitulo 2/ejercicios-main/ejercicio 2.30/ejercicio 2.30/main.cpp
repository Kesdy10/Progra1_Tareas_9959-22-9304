#include <iostream>

using namespace std;
void menu();
void pulgadasLibras();
void metrosKilogramos();
int main()
{
    menu();
    return 0;
}
void menu()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMENU DE BMI" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Usando la altura en metros y peso en kilogramos" << endl;
        cout << "\t2. Usando la altura en pulgadas y peso en libras" << endl;
        cout << "\t3. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                metrosKilogramos();
                break;
        case 2:
                pulgadasLibras();
                break;
        case 3:
                repetir = false;
                break;
        }
    } while (repetir);
}
void pulgadasLibras()
{
    double bmi,pesol, alturap;
    cout << "\n\tIngrese su altura en pulgadas" << endl;
    cin >> alturap;
    cout << "\n\tIngrese su peso en libras" << endl;
    cin >> pesol;
    cout << "\n------------------------------";
    bmi=(pesol*703)/(alturap*alturap);
    cout << "\n\t usted tiene un BMI de :" << bmi <<endl;
    cout << "\n--------------------------------------------";
    cout << "\n\t LA LISTA DE MBI ES LA SIGUIENTE: ";
    cout << "\n\t Bajo Peso: Menos de 18.5 " << endl;
    cout << "\t Normal : entre 18.5 y 24.9 " << endl;
    cout << "\t Sobrepeso: entre 25 y 29.9 " << endl;
    cout << "\t Obeso: 30 o mas " << endl;
    cout << "\n" ;
    system("pause>nul");
}
void metrosKilogramos()
{
    double bmi,pesok,alturam;
    cout << "\n\tIngrese su altura en metros: " << endl;
    cin >> alturam;
    cout << "\n\tIngrese su peso en Kilogramos: " << endl;
    cin >> pesok;
    cout << "\n--------------------------------------------";
    bmi=(pesok)/(alturam*alturam);
    cout << "\n\t usted tiene un BMI de :" << bmi <<endl;
    cout << "\n--------------------------------------------";
    cout << "\n\t LA LISTA DE MBI ES LA SIGUIENTE: ";
    cout << "\n\t Bajo Peso: Menos de 18.5 " << endl;
    cout << "\t Normal : entre 18.5 y 24.9 " << endl;
    cout << "\t Sobrepeso: entre 25 y 29.9 " << endl;
    cout << "\t Obeso: 30 o mas " << endl;
    cout << "\n" ;
    system("pause>nul");
}
