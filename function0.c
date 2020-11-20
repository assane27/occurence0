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

    //Copier les éléments dans le tableau tab1 à partir de la fin du tableau tab   
    void inverse(float T[],int N)
    {
        int i,j;
        float T1[50];
    for (i = N- 1, j = 0; i >= 0; i--, j++)
        T1[j] = T[i];
    
    //Copie le tableau inversé dans l'original.
    for (i = 0; i < N; i++)
        T[i] = T1[i];
    
    printf("Le tableau inversé est: ");
    
    for (i = 0; i < N; i++)
        printf(" %.2f", T[i]);
    
    return ;
}
 /* Initialisation des dimensions de TPOS et TNEG */
 void AfficheTPOSetTNEG(float T[],int N)
 { 
     int I;
     float TPOS[50],TNEG[50];
 int NPOS=0;
 int NNEG=0;
 /* Transfer des données */
 for (I=0; I<N; I++)
      { if (T[I]>=0) {
                     TPOS[NPOS]=T[I];
                     NPOS++;
                    }
        if (T[I]<0) {
                     TNEG[NNEG]=T[I];
                     NNEG++;
                    }
      }
  /* Edition du résultat */
 printf("Tableau TPOS :\n");
 for (I=0; I<NPOS; I++)
     printf("%.2f\t", TPOS[I]);
 printf("\n");
 printf("Tableau TNEG :\n");
 for (I=0; I<NNEG; I++)
     printf("%.2f\t", TNEG[I]);
 printf("\n");
}
