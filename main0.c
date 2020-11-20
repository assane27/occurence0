#include <stdio.h>
#include "function0.h"
int main()
  {
    int j,i,k,nbr;
    char c;
    float tab[50];
   
    printf("nobre d'elemnt ");
   do {
if(((scanf("%d",&nbr) == 1) || (c=getchar() != '\n' && c != EOF )) && (nbr>1 && nbr<50)) 
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
      printf("\ntab[%d] = %.2f\n",i,tab[i]);
   }
   inverse(tab,nbr);
   printf("\n");
   AfficheTPOSetTNEG(tab,nbr);
       }else{
    printf("La valeur que vous avez saisis n'est pas un entier\n\tSaisissez un entier compris entre 1 et 50\n");
       }           
} while(nbr>1 || nbr<50);
   
   return 0;
}
    
  
   