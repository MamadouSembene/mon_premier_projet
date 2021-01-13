#include <stdio.h>
/* ce programme permet de faire une operation ternaire c'est comme le programme p1 mais avec ternaire*/
int main(){

    int a ;
    printf (" saisir un entier \n");
    scanf(" %d" , &a);
    printf ("%d est %s ",a,(a%2 == 0 ) ? " paire":"impaire");

    return 0;
}   