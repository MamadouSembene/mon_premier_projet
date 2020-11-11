#include<stdio.h>
int maximal ( int a, int b){
int maxi;
    if ( a > b){
        maxi=a;
    }
    else {
        maxi=b;
    }
    printf(" le nombre maximal est %d: \n", maxi);

    return 0 ;
      
    }