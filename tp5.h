#ifndef TP5_H
#define TP5_H

typedef struct {
    int eau;
    int cafe;
    int bonbons;
    int gateaux;
    int legumes;
    int fruits;
    int proteines;
} Consommation;


typedef struct
{
    int eau;
    int legumes;
    int fruits;
    int proteines;
} Objectifs;


int afficherMenu();

Consommation ajouterConsommation(Consommation c);

void afficherResume(Consommation c);

int humeurBonbons(int quantite);

int humeurLegumes(int quantite);

int humeurFruits(int quantite);

void afficherBarre(int valeur, int max);

int calculerScoreSante(Consommation c, Objectifs o);

void afficherObjectifsEtScore(Consommation c, Objectifs o);

#endif 