#include<stdio.h>
int main(){
        int tab[5],i;
            //for (i=0;i<5;i++){
                for (i=1;i<=5;i++){
                    printf("veuiller saisir la valeur du tableau %d\n",i);
                        scanf("%d",&tab[i]);
                            }    
                                for(i=0;i<5;i++){
                                    printf("tab[%d]=%d\n",i,tab[i]);
                                        }
                                            int j;
                                        int som=0;
                                    for(j=0;j<5;j++){
                                printf("saisir les valeurs du tableau[%d]\n ",j);
                             scanf("%d",&tab[j]);
                        som=som+tab[j];
                    }  
                printf("%d+%d+%d+%d+%d=%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],som);
            printf("la somme des tableaux sont = %d\n",som);
        return 0;
    }