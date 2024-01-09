#include <stdio.h>
#include <stdlib.h>
#include "covid.h"

int main() {

listev l =  NULL;
struct vaccin v;
l = remplir_element(l,v);
afficher(l);

printf("le nombre d'etudiant vacciner est : %d\n",calcul_nmbre(l));

printf("\n-----avant la suppression-----\n");
  
afficha_debut(l);
l =supp(l);
printf("\n-----apres la suppression-----\n");

afficha_debut(l);
    return 0;
}