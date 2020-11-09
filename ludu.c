    // ce programme permet d,(afficher les les nombre de 10a 1 si on entre 10)
    #include<stdio.h>
    int main (int argv, char *argc[]){ 
    int nombre_a_saisir;
    printf("veuillez saisir 10:\n");
    scanf("%d",&nombre_a_saisir);
    if (nombre_a_saisir==10){
        printf("affiche\n\n10\n9\n8\n7\n6\n5\n4\n3\n2\n1\n");
    }
    else //(nombre_a_saisi!=10);
    printf("le nombre saisir est different de 10\n");

    return 0 ;

    }