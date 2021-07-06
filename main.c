#include "Libreria_Calcolatrice.h"

int menuCalcolatrice();
float addizione(float num1, float num2);
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
            printf("Funzione SOTTRAZIONE in costruzione\n");
            break;
        case MOLTIPLICAZIONE:
            printf("Funzione MOLTIPLICAZIONE in costruzione\n");
            break;
        case DIVISIONE:
            printf("Funzione DIVISIONE in costruzione\n");
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
int menuCalcolatrice(){
    int scelta;
    printf("\tMENU");
    printf("\n1) Addizione");
    printf("\n2) Sottrazione");
    printf("\n3) Moltiplicazione");
    printf("\n4) Divisione");
    printf("\nScelta:");
    scanf("%d", &scelta);
    return scelta;
}
float addizione(float num1, float num2){

    return num1+num2;
}

