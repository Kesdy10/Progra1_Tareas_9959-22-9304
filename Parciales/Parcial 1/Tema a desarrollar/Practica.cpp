// Parcial 1 Practica
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

    const int NUMERO_INDUSTRIA = 5;
    const int NUMERO_ALUMNOS2 = 5;
    const int NUMERO_ALUMNOS3 = 5;
    const int NUMERO_MATERIAS = 4;
    const int MAX_ACTIVIDADES = 1000000;
    const int MAX_CALIFICACION_PP = 1000000;
    const int MAX_CALIFICACION_SP = 1000000;
    const int MAX_CALIFICACION_F = 1000000;
    const int MIN_CALIFICACION = 0;
    const int MAXIMA_LONGITUD_CADENA = 100;
    float totalpromedio1 = 0;
    float totalpromedio2 =0 ;
    float totalpromedio3 = 0;
    const char FACULTAD = 3;

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz1(float matriz[NUMERO_INDUSTRIA][NUMERO_MATERIAS + 1]);
void llenarMatriz2(float matriz[NUMERO_ALUMNOS2][NUMERO_MATERIAS + 1]);
void llenarMatriz3(float matriz[NUMERO_ALUMNOS3][NUMERO_MATERIAS + 1]);
void imprimirMatrizLinea();
void imprimirMatriz1(float matriz1[NUMERO_INDUSTRIA][NUMERO_MATERIAS + 1], char alumnos[NUMERO_INDUSTRIA][MAXIMA_LONGITUD_CADENA]);
void imprimirMatriz2(float matriz2[NUMERO_ALUMNOS2][NUMERO_MATERIAS + 1], char alumnos[NUMERO_ALUMNOS2][MAXIMA_LONGITUD_CADENA]);
void imprimirMatriz3(float matriz3[NUMERO_ALUMNOS3][NUMERO_MATERIAS + 1], char alumnos[NUMERO_ALUMNOS3][MAXIMA_LONGITUD_CADENA]);
int main()
{
    srand(getpid());
    float matriz1[NUMERO_INDUSTRIA][NUMERO_MATERIAS + 1];
    float matriz2[NUMERO_ALUMNOS2][NUMERO_MATERIAS + 1];
    float matriz3[NUMERO_ALUMNOS3][NUMERO_MATERIAS + 1];
    char INDUSTRIA[NUMERO_INDUSTRIA][MAXIMA_LONGITUD_CADENA] = {"EMPRESA1","EMPRESA2","EMPRESA3","EMPRESA4","EMPRESA5"};
    char alumnos2[NUMERO_ALUMNOS2][MAXIMA_LONGITUD_CADENA] =  {"EMPRESA1","EMPRESA2","EMPRESA3","EMPRESA4","EMPRESA5"};
    char alumnos3[NUMERO_ALUMNOS3][MAXIMA_LONGITUD_CADENA] =  {"EMPRESA1","EMPRESA2","EMPRESA3","EMPRESA4","EMPRESA5"};
    llenarMatriz1(matriz1);
    imprimirMatriz1(matriz1, INDUSTRIA);
    llenarMatriz2(matriz2);
    imprimirMatriz2(matriz2, alumnos2);
    llenarMatriz3(matriz3);
    imprimirMatriz3(matriz3, alumnos3);
 }
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz1(float matriz1[NUMERO_INDUSTRIA][NUMERO_MATERIAS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_INDUSTRIA; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_PP);

            matriz1[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_SP);

            matriz1[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_F);

            matriz1[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_CALIFICACION, MAX_ACTIVIDADES);

            matriz1[y][3] = calificacion4;
            suma= matriz1[y][0]+matriz1[y][1]+matriz1[y][2]+matriz1[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_MATERIAS;
        matriz1[y][NUMERO_MATERIAS] = promedio;
        totalpromedio1= (float)promedio+totalpromedio1;

    }
}

void llenarMatriz2(float matriz2[NUMERO_ALUMNOS2][NUMERO_MATERIAS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS2; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_PP);

            matriz2[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_SP);

            matriz2[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_F);

            matriz2[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_CALIFICACION, MAX_ACTIVIDADES);

            matriz2[y][3] = calificacion4;
            suma= matriz2[y][0]+matriz2[y][1]+matriz2[y][2]+matriz2[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_MATERIAS;
        matriz2[y][NUMERO_MATERIAS] = promedio;
        totalpromedio2= (float)promedio+totalpromedio2;
    }
}

void llenarMatriz3(float matriz3[NUMERO_ALUMNOS3][NUMERO_MATERIAS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_ALUMNOS3; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_PP);

            matriz3[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_SP);

            matriz3[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION_F);

            matriz3[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_CALIFICACION, MAX_ACTIVIDADES);

            matriz3[y][3] = calificacion4;
            suma= matriz3[y][0]+matriz3[y][1]+matriz3[y][2]+matriz3[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_MATERIAS;
        matriz3[y][NUMERO_MATERIAS] = promedio;
        totalpromedio3= (float)promedio+totalpromedio3;
    }
}

void imprimirMatrizLinea()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_MATERIAS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}
void imprimirMatriz1(float matriz1[NUMERO_INDUSTRIA][NUMERO_MATERIAS + 1], char INDUSTRIA[NUMERO_INDUSTRIA][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz1[0][NUMERO_MATERIAS];
    float promedioMenor = matriz1[0][NUMERO_MATERIAS];
    char INDUSTRIAPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char INDUSTRIAPromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << "" << endl;
    cout << "" << endl;
    cout << "\t\t\tINDUSTRIA" << endl;

    imprimirMatrizLinea();

    cout << setw(8) << "EMPRESA";
    cout  << setw(8) << "2015" ;
    cout  << setw(10) << "2016" ;
    cout  << setw(10) << "2017" ;
    cout  << setw(10)<< "2018" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor=100;
    promedioMayor=0;
    for (y = 0; y < NUMERO_INDUSTRIA; y++)
    {
        cout << "!" << setw(8) << INDUSTRIA[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz1[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz1[y][NUMERO_MATERIAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(INDUSTRIAPromedioMayor, INDUSTRIA[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(INDUSTRIAPromedioMenor, INDUSTRIA[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioDeClase1= totalpromedio1/NUMERO_INDUSTRIA;
    cout << "Promedio mayor INDUSTRIA: " << setw(10) << INDUSTRIAPromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor INDUSTRIA: " << setw(10) << INDUSTRIAPromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
    cout << "promedio total de industria es de: " << setw(9) << promedioDeClase1 << endl;
    cout << "" << endl;
}

void imprimirMatriz2(float matriz2[NUMERO_ALUMNOS2][NUMERO_MATERIAS + 1], char alumnos2[NUMERO_ALUMNOS2][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz2[0][NUMERO_MATERIAS];
    float promedioMenor = matriz2[0][NUMERO_MATERIAS];
    char INDUSTRIAPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char INDUSTRIAPromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << "" << endl;
    cout << "" << endl;
    cout << "\t\t\tCOSTRUCCION" << endl;

    imprimirMatrizLinea();

    cout << setw(8) << "EMPRESA";
    cout  << setw(8) << "2015" ;
    cout  << setw(10) << "2016" ;
    cout  << setw(10) << "2017" ;
    cout  << setw(10)<< "2018" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor=100;
    promedioMayor=0;
    for (y = 0; y < NUMERO_ALUMNOS2; y++)
    {
        cout << "!" << setw(8) << alumnos2[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz2[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz2[y][NUMERO_MATERIAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumno2PromedioMayor, alumnos2[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumno2PromedioMenor, alumnos2[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioDeClase2= totalpromedio2/NUMERO_ALUMNOS2;
    cout << "Promedio mayor ARQUITECTURA: " << setw(10) << alumno2PromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor ARQUITECTURA: " << setw(10) << alumno2PromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
    cout << "promedio total de arquitectura es de: " << setw(9) << promedioDeClase2 << endl;
    cout << "" << endl;
}

void imprimirMatriz3(float matriz3[NUMERO_ALUMNOS3][NUMERO_MATERIAS + 1], char alumnos3[NUMERO_ALUMNOS3][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz3[0][NUMERO_MATERIAS];
    float promedioMenor = matriz3[0][NUMERO_MATERIAS];
    char alumno2PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno2PromedioMenor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMayor[MAXIMA_LONGITUD_CADENA];
    char alumno3PromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << "" << endl;
    cout << "" << endl;
    cout << "\t\t\tTRANSPORTE" << endl;

    imprimirMatrizLinea();

    cout << setw(8) << "EMPRESA";
    cout  << setw(8) << "2015" ;
    cout  << setw(10) << "2016" ;
    cout  << setw(10) << "2017" ;
    cout  << setw(10)<< "2018" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor=100;
    promedioMayor=0;
    for (y = 0; y < NUMERO_ALUMNOS3; y++)
    {
        cout << "!" << setw(8) << alumnos3[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz3[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz3[y][NUMERO_MATERIAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumno3PromedioMayor, alumnos3[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumno3PromedioMenor, alumnos3[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioDeClase3= totalpromedio3/NUMERO_ALUMNOS3;
    cout << "Promedio mayor TRANSPORTE: " << setw(10) << alumno3PromedioMayor << " Nota: " << setw(10) << promedioMayor << endl;
    cout << "Promedio menor TRANSPORTE: " << setw(10) << alumno3PromedioMenor << " Nota: " << setw(10) << promedioMenor << endl;
    cout << "promedio totaL de TRANSPORTE es de: " << setw(9) << promedioDeClase3 << endl;
    cout << "" << endl;
}
