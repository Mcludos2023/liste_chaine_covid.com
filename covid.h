#ifndef COVID_H
#define COVID_H

//définition de la structure vaccin

struct vaccin
{
    char nom[20];
    int Nbre_Dos;
};


// définition de la liste cellule

struct cellule{

    struct vaccin val;
    struct cellule *suiv;

};
typedef struct cellule *listev;

listev AjoutQueue(listev l,struct vaccin v);
listev remplir_element(listev l,struct vaccin v);
void afficher(listev l);
int calcul_nmbre(listev l);
listev supp(listev l);
void afficha_debut(listev l);
#endif
 