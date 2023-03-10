#ifndef PRACTI_H
#define PRACTI_H
#include "Practi.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

    void funciones();
    const int NUMERO_INDUSTRIA = 5;
    const int NUMERO_CONSTRUCCION = 5;
    const int NUMERO_TRANSPORTE = 5;
    const int NUMERO_ANIOS = 4;
    const int MAX_2015 = 1000000;
    const int MAX_2016 = 1000000;
    const int MAX_2017 = 1000000;
    const int MAX_2018 = 1000000;
    const int MIN_CALIFICACION = 0;
    const int MAXIMA_LONGITUD_CADENA = 100;

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz1(float matriz[NUMERO_INDUSTRIA][NUMERO_ANIOS + 1]);
void llenarMatriz2(float matriz[NUMERO_CONSTRUCCION][NUMERO_ANIOS + 1]);
void llenarMatriz3(float matriz[NUMERO_TRANSPORTE][NUMERO_ANIOS + 1]);
void imprimirMatrizLinea();
void imprimirMatriz1(float matriz1[NUMERO_INDUSTRIA][NUMERO_ANIOS + 1], char EMPRESAS[NUMERO_INDUSTRIA][MAXIMA_LONGITUD_CADENA]);
void imprimirMatriz2(float matriz2[NUMERO_CONSTRUCCION][NUMERO_ANIOS + 1], char EMPRESAS[NUMERO_CONSTRUCCION][MAXIMA_LONGITUD_CADENA]);
void imprimirMatriz3(float matriz3[NUMERO_TRANSPORTE][NUMERO_ANIOS + 1], char EMPRESAS[NUMERO_TRANSPORTE][MAXIMA_LONGITUD_CADENA]);

#endif // PRACTI_H
