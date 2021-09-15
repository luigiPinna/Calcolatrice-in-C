#include "Libreria_Calcolatrice.h"
#include <math.h>
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