#include "Libreria_Calcolatrice.h"
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

//Funzione di input
int menuCalcolatrice(){
    int scelta;
    printf("\tMENU");
    printf("\n1) Addizione");
    printf("\n2) Sottrazione");
    printf("\n3) Moltiplicazione");
    printf("\n4) Divisione");
    printf("\n5) Radice quardata");
    printf("\n6) Potenza");
    printf("\n6) E' Primo?");
    printf("\n0) Esci");
    printf("\nScelta:");
    scanf("%d", &scelta);
    return scelta;
}

//Funzioni di calcolo
float addizione(float num1, float num2){
    return num1+num2;
}
float sottrazione(float num1, float num2){
    return num1-num2;
}
float moltiplicazione(float num1, float num2){
    return num1*num2;
}
float divisione(float num1, float num2){
    if(num2!=0){
        return num1/num2;
    }
    else{
        return -1;
    }
}

float radiceQuadrata(float num1){
    float r;
    r= sqrt(num1);
    return r;
}
float potenza(float num1, float num2){
    float p;
    p= pow (num1 ,num2);
    return p;
}
//Verifica numeri primi
_Bool isPrime(int num) {
    int i = 2; //Si parte da 2 (tutti i numeri sono divisibili per 1)

    //Finche' i non arriva al numero stesso (<, quindi non esegue il blocco quando i assume il valore del numero)
    while (i < num) {
        if (num % i == 0) //Se num è divisibile per i
            return false; //Se esiste un solo numero che divide num, allora il numero non è primo

        i++; //Incremento dell'indice per passare al valore successivo
    }
    return true; //Se non esiste nessun divisore tra i precendenti, il numero è primo
}

void primo(_Bool isPrime){
    if(isPrime){
        printf("Il numero e' primo!");
    }else{
        printf("Il numero non e' primo");
    }
}