#include "Libreria_Calcolatrice.h"

int menuCalcolatrice();

int main() {
    int sceltaMenu;
    do{
    sceltaMenu=menuCalcolatrice();
    switch (sceltaMenu) {
        case ADDIZIONE:
            printf("Funzione ADDIZIONE in costruzione\n");
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

