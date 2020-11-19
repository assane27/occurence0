#include <stdio.h>
/*saisir du clavier les elements d'un tableau*/
void saisie (float T[],int N)
{
    int i;
    char c;
    printf("\n");
  
     
    for(i=0; i<N; i++)
   {
       do{
       printf("valeur de T[%d] = ",i); 
       scanf("%f",&T[i]);
        }while ((c=getchar()) != '\n' && c != EOF );
   }
  
return;
}
/*affichage des elements d'un tableau*/
void affiche(float T[],int N)
{
   int i;
   printf("\n");
   for(i=0; i<N; i++)
   {
       printf("tab[%d] = %.2f\n",i,T[i]);
   }
   printf("\n");
   return;
}
