// Examen parcial 1
// Tema a desarrollar

#include <iostream>

using namespace std;
class Persona
{
public:
    string Nombre;
    Persona()
    {
        Nombre="Alejandro";
    }
    Persona(string pNombre)
    {
        Nombre = pNombre;
    }
    void Caminar()
    {
        cout << Nombre << " puede caminar " << endl;
    }
    void Correr()
    {
        cout << Nombre << " puede correr " << endl;
    }
    void Hablar()
    {
        cout << Nombre << " puede hablar " << endl;
    }
};
int main()
{
    Persona PrimeraPersona;
    cout << "Mi Objeto abstracto creado es una persona y se llama:  " << PrimeraPersona.Nombre << endl;
    PrimeraPersona.Caminar();
    PrimeraPersona.Correr();
    PrimeraPersona.Hablar();
    return 0;
}


