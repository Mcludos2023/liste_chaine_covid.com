#include <stdio.h>
#include <stdlib.h>
#include "covid.h"

//ajouter un element en fin de liste
listev AjoutQueue(listev l,struct vaccin v){
   // cellule *c,*p;
    listev c,p;
    
   // c=(*cellule)malloc(sizeof(cellule));
   c=malloc(sizeof(listev));
    c->val =v;
    c->suiv =NULL;
    if(l == NULL) 
      l=c;
    else{
        p=l;
        while(p->suiv !=NULL)
        {
            p=p->suiv;
        }
        p->suiv=c;
    };

    return l;
}

// remplir les 04 éléments dans la liste

listev remplir_element(listev l,struct vaccin v)
{
 
   for(int i =1; i<=4 ; i++)   
   {
        printf("donner le nom de l'etudiant %d :",i);
        scanf("%s", v.nom);
        do
        {
            printf("donner le nombre de dose :");
            scanf("%d",&v.Nbre_Dos);
        }
        
        while(v.Nbre_Dos < 0 || v.Nbre_Dos > 5);
    l=AjoutQueue(l,v);

   }
   return l;
}
//affiher le nom et le nombre de dose par etudiant

void afficher(listev l)
{

while(l != NULL)
  {
    if(l->val.Nbre_Dos == 2)
      {
        printf("\n-----------------pas vaccinal-----------------\n");
        
        printf("%s \n %d",l->val.nom,l->val.Nbre_Dos);
        printf("\n-----------------Merci pour votre visite-----------------\n");
        printf("\n");
      }
      l=l->suiv;
  }
}
// calcul du nombre d'etudiant ayant une dose supperieur à 2
int calcul_nmbre(listev l)
{
     int n =0;
     while(l !=NULL)
     {
        if(l->val.Nbre_Dos>=2)
        n++;
        l=l->suiv;
     }
     return n ;
}
// supprimer un étudiant qui n'a pas de dose
listev supp(listev l)
{
    listev p,avant;
    p=l;
    while(l !=NULL)
    {
        avant=p;
        p=p->suiv;
    }
    avant->suiv=p->suiv;
    free(p);
    return l;
}
// affichage début de liste

void afficha_debut(listev l)
{
    while(l!=NULL)
    {
        printf("%s \n %d",l->val.nom,l->val.Nbre_Dos);
        l=l->suiv;
    }
    printf("\n");
}