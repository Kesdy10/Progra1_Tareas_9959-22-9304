#include "Practi.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

    float totalPromedio1 = 0;
    float totalPromedio2 = 0;
    float totalPromedio3 = 0;
    float promedioCamara1 = 0;
    float promedioCamara2 = 0;
    float promedioCamara3 = 0;

void funciones ()
{
    bool repetir = true;
    char res='s';
    system("cls");
    srand(getpid());
    float matriz1[NUMERO_INDUSTRIA][NUMERO_ANIOS + 1];
    float matriz2[NUMERO_CONSTRUCCION][NUMERO_ANIOS + 1];
    float matriz3[NUMERO_TRANSPORTE][NUMERO_ANIOS + 1];
    char INDUSTRIA[NUMERO_INDUSTRIA][MAXIMA_LONGITUD_CADENA] = {"EMPRESA1","EMPRESA2","EMPRESA3","EMPRESA4","EMPRESA5"};
    char CONSTRUCCION[NUMERO_CONSTRUCCION][MAXIMA_LONGITUD_CADENA] = {"EMPRESA1","EMPRESA2","EMPRESA3","EMPRESA4","EMPRESA5"};
    char TRANSPORTE[NUMERO_TRANSPORTE][MAXIMA_LONGITUD_CADENA] = {"EMPRESA1","EMPRESA2","EMPRESA3","EMPRESA4","EMPRESA5"};

    do{
    system("cls");
    totalPromedio1 = 0;
    totalPromedio2 = 0;
    totalPromedio3 = 0;
    promedioCamara1 = 0;
    promedioCamara2 = 0;
    promedioCamara3 = 0;

    llenarMatriz1(matriz1);
    promedioCamara1 = totalPromedio1/NUMERO_INDUSTRIA;
    imprimirMatriz1(matriz1, INDUSTRIA);

    llenarMatriz2(matriz2);
    promedioCamara2 = totalPromedio2/NUMERO_CONSTRUCCION;
    imprimirMatriz2(matriz2, CONSTRUCCION);

    llenarMatriz3(matriz3);
    promedioCamara3 = totalPromedio3/NUMERO_TRANSPORTE;
    imprimirMatriz3(matriz3, TRANSPORTE);
    if (promedioCamara1 > promedioCamara2 && promedioCamara1 > promedioCamara3)
    {
        cout << "La camara con mayor promedio es INDUSTRIA, con promedio de: " << promedioCamara1 << endl;
    }
    else
    if (promedioCamara2 > promedioCamara1 && promedioCamara2 > promedioCamara3)
    {
        cout << "La camara con mayor promedio es CONSTRUCCION, con promedio de: " << promedioCamara2 << endl;
    }
    else
    if (promedioCamara3 > promedioCamara2 && promedioCamara3 > promedioCamara1)
    {
        cout << "La camara con mayor promedio es TRANSPORTE, con promedio de: " << promedioCamara3 << endl;
    }
    else
    {
        cout << "Sus promedios son iguales" << endl;
    }
    cout <<"El promedio de las 3 camaras es de: " << (promedioCamara1+promedioCamara2+promedioCamara3)/3 << endl;
    cout << "" << endl;
    cout << "Desea reiniciar los valores al azar? y/n " << endl;
    cin >> res;
    if (res == 'y')
    {
        repetir = true;
    }
    else
    {
        repetir = false;
    }
    }while (repetir);
 }
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void llenarMatriz1(float matriz1[NUMERO_INDUSTRIA][NUMERO_ANIOS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_INDUSTRIA; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_2016);

            matriz1[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_CALIFICACION, MAX_2017);

            matriz1[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_CALIFICACION, MAX_2018);

            matriz1[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_CALIFICACION, MAX_2015);

            matriz1[y][3] = calificacion4;
            suma= matriz1[y][0]+matriz1[y][1]+matriz1[y][2]+matriz1[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_ANIOS;
        matriz1[y][NUMERO_ANIOS] = promedio;
        totalPromedio1 = (float)promedio + totalPromedio1;
    }
}
void llenarMatriz2(float matriz2[NUMERO_CONSTRUCCION][NUMERO_ANIOS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_CONSTRUCCION; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_2016);

            matriz2[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_CALIFICACION, MAX_2017);

            matriz2[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_CALIFICACION, MAX_2018);

            matriz2[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_CALIFICACION, MAX_2015);

            matriz2[y][3] = calificacion4;
            suma= matriz2[y][0]+matriz2[y][1]+matriz2[y][2]+matriz2[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_ANIOS;
        matriz2[y][NUMERO_ANIOS] = promedio;
        totalPromedio2 = (float)promedio + totalPromedio2;
    }
}
void llenarMatriz3(float matriz3[NUMERO_TRANSPORTE][NUMERO_ANIOS + 1])
{
    int y, x;
    for (y = 0; y < NUMERO_TRANSPORTE; y++)
    {
        float suma = 0, suma2 = 0, suma3 = 0, suma4 = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_2016);

            matriz3[y][0] = calificacion;
            int calificacion2 = busquedaAleatorios(MIN_CALIFICACION, MAX_2017);

            matriz3[y][1] = calificacion2;
            int calificacion3 = busquedaAleatorios(MIN_CALIFICACION, MAX_2018);

            matriz3[y][2] = calificacion3;
            int calificacion4 = busquedaAleatorios(MIN_CALIFICACION, MAX_2015);

            matriz3[y][3] = calificacion4;
            suma= matriz3[y][0]+matriz3[y][1]+matriz3[y][2]+matriz3[y][3];
        }
        // Agregar promedio
        float promedio = suma/ NUMERO_ANIOS;
        matriz3[y][NUMERO_ANIOS] = promedio;
        totalPromedio3 = (float)promedio + totalPromedio3;
    }
}
void imprimirMatrizLinea()
{
    int x;
    cout << "+--------";
    for (x = 0; x < NUMERO_ANIOS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}
void imprimirMatriz1(float matriz1[NUMERO_INDUSTRIA][NUMERO_ANIOS + 1], char INDUSTRIA[NUMERO_INDUSTRIA][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz1[0][NUMERO_ANIOS];
    float promedioMenor = matriz1[0][NUMERO_ANIOS];
    char industriaPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char industriaPromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << "" << endl;
    cout << "" << endl;
    cout << "\t\t    CAMARA DE INDUSTRIA" << endl;

    imprimirMatrizLinea();

    cout << setw(8) << "EMPRESA";
    cout  << setw(8) << "2015" ;
    cout  << setw(10) << "2016" ;
    cout  << setw(10) << "2017" ;
    cout  << setw(10)<< "2018" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor = 10000000;
    promedioMayor = 0;
    for (y = 0; y < NUMERO_INDUSTRIA; y++)
    {
        cout << "!" << setw(8) << INDUSTRIA[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = matriz1[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz1[y][NUMERO_ANIOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(industriaPromedioMayor, INDUSTRIA[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(industriaPromedioMenor, INDUSTRIA[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioCamara1 = totalPromedio1 / NUMERO_INDUSTRIA;
    cout << "Monto de venta mas alto:  " << setw(5) << industriaPromedioMayor << "         con: " << setw(5) << promedioMayor << endl;
    cout << "Monto de venta mas bajo:  " << setw(5) << industriaPromedioMenor << "         con: " << setw(5) << promedioMenor << endl;
    cout << "Monto de venta promedio de INDUSTRIA es: " << setw(15) << promedioCamara1 << endl;
    cout << "" << endl;
}
void imprimirMatriz2(float matriz2[NUMERO_CONSTRUCCION][NUMERO_ANIOS + 1], char CONSTRUCCION[NUMERO_CONSTRUCCION][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz2[0][NUMERO_ANIOS];
    float promedioMenor = matriz2[0][NUMERO_ANIOS];
    char construccionPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char construccionPromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << "" << endl;
    cout << "" << endl;
    cout << "\t\t   CAMARA DE CONSTRUCCION" << endl;

    imprimirMatrizLinea();
    cout << setw(8) << "EMPRESA";
    cout  << setw(8) << "2015" ;
    cout  << setw(10) << "2016" ;
    cout  << setw(10) << "2017" ;
    cout  << setw(10)<< "2018" ;
    cout << setw(11) << "Prom" << endl;

    imprimirMatrizLinea();
    promedioMenor = 10000000;
    promedioMayor = 0;
    for (y = 0; y < NUMERO_CONSTRUCCION; y++)
    {
        cout << "!" << setw(8) << CONSTRUCCION[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = matriz2[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz2[y][NUMERO_ANIOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(construccionPromedioMayor, CONSTRUCCION[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(construccionPromedioMenor, CONSTRUCCION[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioCamara2 = totalPromedio2 / NUMERO_CONSTRUCCION;
    cout << "Monto de venta mas alto: " << setw(5) << construccionPromedioMayor << "          con: " << setw(5) << promedioMayor << endl;
    cout << "Monto de venta mas bajo: " << setw(5) << construccionPromedioMenor << "          con: " << setw(5) << promedioMenor << endl;
    cout << "Monto de venta promedio de CONSTRUCCION es: " << setw(12) << promedioCamara2 << endl;
    cout << "" << endl;
}
void imprimirMatriz3(float matriz3[NUMERO_TRANSPORTE][NUMERO_ANIOS + 1], char TRANSPORTE[NUMERO_TRANSPORTE][MAXIMA_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz3[0][NUMERO_ANIOS];
    float promedioMenor = matriz3[0][NUMERO_ANIOS];
    char transportePromedioMayor[MAXIMA_LONGITUD_CADENA];
    char transportePromedioMenor[MAXIMA_LONGITUD_CADENA];
    cout << "" << endl;
    cout << "" << endl;
    cout << "\t\t   CAMARA DE TRANSPORTE" << endl;

    imprimirMatrizLinea();

    cout << setw(8) << "EMPRESA";
    cout  << setw(8) << "2015" ;
    cout  << setw(10) << "2016" ;
    cout  << setw(10) << "2017" ;
    cout  << setw(10)<< "2018" ;
    cout << setw(11) << "Prom" << endl;
    imprimirMatrizLinea();
    promedioMenor = 10000000;
    promedioMayor = 0;
    for (y = 0; y < NUMERO_TRANSPORTE; y++)
    {
        cout << "!" << setw(8) << TRANSPORTE[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_ANIOS; x++)
        {
            int calificacion = matriz3[y][x];
            cout << setw(9) << calificacion << "!";
        }
        float promedio = matriz3[y][NUMERO_ANIOS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(transportePromedioMayor, TRANSPORTE[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(transportePromedioMenor, TRANSPORTE[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    float promedioCamara3 = totalPromedio3 / NUMERO_TRANSPORTE;
    cout << "Monto de venta mas alto: " << setw(5) << transportePromedioMayor << "          con: " << setw(5) << promedioMayor << endl;
    cout << "Monto de venta mas bajo: " << setw(5) << transportePromedioMenor << "          con: " << setw(5) << promedioMenor << endl;
    cout << "Monto de venta promedio de TRANSPORTE es: " << setw(14) << promedioCamara3 << endl;
    cout << "" << endl;
}
