#ifndef CALCOLATRICE_CON_GIT_LIBRERIA_CALCOLATRICE_H
#define CALCOLATRICE_CON_GIT_LIBRERIA_CALCOLATRICE_H

#include <stdio.h>
typedef enum{ESCI, ADDIZIONE, SOTTRAZIONE, MOLTIPLICAZIONE, DIVISIONE, RADICE_QUADRATA, POTENZA, PRIMO}Operazione;

//Funzione di input
int menuCalcolatrice();
//Funzioni di calcolo
float addizione(float num1, float num2);
float sottrazione(float num1, float num2);
float divisione(float num1, float num2);
float moltiplicazione(float num1, float num2);
float radiceQuadrata(float num1);
float potenza(float num1, float num2);
//Verifica se il numero e' un num. primo
_Bool isPrime(int num);
void primo(_Bool isPrime);

#endif //CALCOLATRICE_CON_GIT_LIBRERIA_CALCOLATRICE_H
