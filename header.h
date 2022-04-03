#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ANIO_BASE 1601
#define esBisiesto(anio) ((anio)%4==0&&(anio)%100!=0||(anio)%400==0)

typedef enum
{
    FALSO, VERDADERO
}booleano;

typedef struct
{
    int dia;
    int mes;
    int anio;
}Fecha;

booleano esFechaValida(Fecha fecha);
booleano continuar(char* mensaje);
int cantDiaMes(int mes, int anio);
void restaNDias(int dia, int mes, int anio);


#endif // HEADER_H_INCLUDED
