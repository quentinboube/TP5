#include <stdio.h>
#include "tp5.h"

int afficherMenu() {
    printf("\n\n===============================\n");
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

Consommation ajouterConsommation(Consommation c){
    int categorie;
    int quantite;

    printf("\nQuelle categorie voulez-vous modifier ?\n");
    printf("1. Eau\n");
    printf("2. Cafe\n");
    printf("3. Bonbons\n");
    printf("4. Gateaux\n");
    printf("5. Legumes\n");
    printf("6. Fruits\n");
    printf("7. Proteines\n");

    printf("Votre choix : ");
    scanf("%d", &categorie);

    if(categorie < 1 || categorie > 7){
        printf("Categorie invalide.\n");
        return c;
    }

    printf("Combien d'unites ajouter ? ");
    scanf("%d", &quantite);

    if(quantite < 0){
        printf("Quantite invalide.\n");
        return c;
    }

    switch(categorie){
        case 1:
            c.eau += quantite;
            break;

        case 2:
            c.cafe += quantite;
            break;

        case 3:
            c.bonbons += quantite;
            break;

        case 4:
            c.gateaux += quantite;
            break;

        case 5:
            c.legumes += quantite;
            break;

        case 6:
            c.fruits += quantite;
            break;

        case 7:
            c.proteines += quantite;
            break;
    }

    printf("Consommation mise a jour.\n");

    return c;
}

int humeurBonbons(int q)
{
    if(q <= 3)
        return 0;
    else if(q <= 7)
        return 1;
    else if(q <= 12)
        return 2;
    else
        return 3;
}

int humeurLegumes(int q)
{
    if(q <= 1)
        return 0;
    else if(q <= 3)
        return 1;
    else if(q <= 5)
        return 2;
    else
        return 3;
}

int humeurFruits(int q)
{
    if(q == 0)
        return 0;
    else if(q <= 2)
        return 1;
    else if(q <= 4)
        return 2;
    else
        return 3;
}

void afficherResume(Consommation c)
{
    printf("\n========== RESUME DU JOUR ==========\n");

    printf("Eau       : %d      ", c.eau);
    afficherBarre(c.eau,10);
    printf("\n");

    printf("Cafe      : %d      ", c.cafe);
    afficherBarre(c.cafe,10);
    printf("\n");

    printf("Bonbons   : %d ", c.bonbons);
    switch(humeurBonbons(c.bonbons))
    {
        case 0: 
            printf("😇   "); 
            break;
        case 1: 
            printf("🙂   "); 
            break;
        case 2: 
            printf("😬   "); 
            break;
        case 3: 
            printf("😈   "); 
            break;
    }
    afficherBarre(c.bonbons,15);
    printf("\n");

    printf("Gateaux   : %d      ", c.gateaux);
    afficherBarre(c.gateaux,10);
    printf("\n");

    printf("Legumes   : %d ", c.legumes);

    switch(humeurLegumes(c.legumes))
    {
        case 0: 
            printf("😕   "); 
            break;
        case 1: 
            printf("🙂   "); 
            break;
        case 2: 
            printf("😎   "); 
            break;
        case 3: 
            printf("🤩   "); 
            break;
    }
    afficherBarre(c.legumes,10);
    printf("\n");

    printf("Fruits    : %d ", c.fruits);

    switch(humeurFruits(c.fruits))
    {
        case 0: 
            printf("☹️   "); 
            break;
        case 1: 
            printf("🙂   "); 
            break;
        case 2: 
            printf("😁   "); 
            break;
        case 3: 
            printf("🤩   "); 
            break;
    }
    afficherBarre(c.fruits,10);
    printf("\n");

    printf("Proteines : %d      ", c.proteines);
    afficherBarre(c.proteines,10);
    printf("\n");

    printf("====================================\n");
}

void afficherBarre(int valeur, int max)
{
    int i;
    int casesPleines;

    if(max <= 0)
        max = 1;

    if(valeur < 0)
        valeur = 0;

    if(valeur > max)
        valeur = max;

    casesPleines = (valeur * 10) / max;

    for(i = 0; i < 10; i++)
    {
        if(i < casesPleines)
            printf("█");
        else
            printf("░");
    }
}