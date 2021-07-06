#include "Libreria_Calcolatrice.h"


int main() {
    int sceltaMenu;
    float num1,num2;
    do{
    sceltaMenu=menuCalcolatrice();
    switch (sceltaMenu) {
        case ADDIZIONE:
            printf("Inserisci il primo numero:");
            scanf("%f", &num1);
            printf("Inserisci il secondo numero:");
            scanf("%f", &num2);
            printf("Il risultato dell'addizione e': %.2f\n", addizione(num1,num2));
            break;
        case SOTTRAZIONE:
            printf("Inserisci il primo numero:");
            scanf("%f", &num1);
            printf("Inserisci il secondo numero:");
            scanf("%f", &num2);
            printf("Il risultato della sottrazione e': %.2f\n", sottrazione(num1,num2));
            break;
        case MOLTIPLICAZIONE:
            printf("Inserisci il primo numero:");
            scanf("%f", &num1);
            printf("Inserisci il secondo numero:");
            scanf("%f", &num2);
            printf("Il risultato della moltiplicazione e': %.2f\n", moltiplicazione(num1,num2));
            break;
        case DIVISIONE:
            printf("Inserisci il primo numero:");
            scanf("%f", &num1);
            printf("Inserisci il secondo numero:");
            scanf("%f", &num2);
            printf("Il risultato della divisione e': %.2f\n", divisione(num1,num2));
            break;
        case ESCI:
            printf("Grazie. Arrivederci!\n");
            break;
        default:
            printf("Scelta non valida. Prova ancora!\n");
    }
} while (sceltaMenu != ESCI);
    return 0;
}



