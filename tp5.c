#include <windows.h>
#include <unistd.h>
#include <locale.h>
#include <stdio.h>
#include "tp5.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    Consommation jour = {0, 0, 0, 0, 0, 0, 0};

    while (1)
    {
        switch(afficherMenu()) {
            case 1:                 // Ajouter une consommation
                jour = ajouterConsommation(jour);
                break;
                

            case 2:                 // Afficher le résumé du jour
                printf("\nRésumé du jour :\n");
                printf("Eau : %d\n", jour.eau);
                printf("Cafe : %d\n", jour.cafe);
                printf("Bonbons : %d\n", jour.bonbons);
                printf("Gateaux : %d\n", jour.gateaux);
                printf("Legumes : %d\n", jour.legumes);
                printf("Fruits : %d\n", jour.fruits);
                printf("Proteines : %d\n", jour.proteines);
                break;

            case 3:                 // Sauvegarder et quitter
                printf("Sauvegarde en cours...\n");
                sleep(2); 
                printf("Merci d'avoir utilisé le programme. À bientôt !\n");
                return 0;
                break;


            default:
                printf("Choix invalide. Veuillez réessayer.\n");
                break;
        }
    }
    
    

    return 0;
}