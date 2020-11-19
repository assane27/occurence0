/*Ecrire un programme qui lit la dimension N d'un tableau T du type 
int (dimension maximale: 50 composantes), 
remplit le tableau par des valeurs entrées au clavier 
et affiche le tableau.

Effacer ensuite toutes les occurrences de la valeur 0 dans 
le tableau T et tasser les éléments restants. Afficher
 le tableau résultant.*/
#include <stdio.h>
#include "function0.h"
int main()
  {
    int j,i,k,nbr;
    char c;
    float tab[50];

      printf("nobre d'elemnt ");
      do
{
       if (scanf("%d",&nbr) == 1 )
       {
          
    saisie(tab,nbr);
    affiche(tab,nbr);
     
   for (i = 0; i < nbr; i++) {
      for (j = i + 1; j < nbr;) {
         if (tab[j] == 0) {
            for (k = j; k < nbr; k++) {
               tab[k] = tab[k + 1];
            }
            nbr--;
         } else
            j++;
      }
   }
 
   printf(" Tableau sans occurence de 0 :\n ");
   for (i = 0; i < nbr; i++) 
   {
      printf("%.2f\t", tab[i]);
   }
       }else
    printf("La valeur que vous avez saisis n'est pas un entier\n\tSaisissez un entier\n");
} while ((c=getchar()) != '\n' && c != EOF );
   
   return 0;
}
    
  
   