#include "Libreria_Calcolatrice.h"

//Funzione di input
int menuCalcolatrice(){
    int scelta;
    printf("\tMENU");
    printf("\n1) Addizione");
    printf("\n2) Sottrazione");
    printf("\n3) Moltiplicazione");
    printf("\n4) Divisione");
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
    return num1/num2;
}