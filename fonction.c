#include <stdio.h>
#include "tp5.h"

int afficherMenu() {
    printf("===============================\n");
    printf("Suivi de consommation :\n");
    printf("===============================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le résumé du jour\n");
    printf("3. Sauvegarder et quitter\n");
    printf("Votre choix : ");
    int choix;
    scanf("%d", &choix);
    return choix;
}