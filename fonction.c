
#include <stdio.h>
#include<ctype.h>
#include "fonction.h"
/*int maximal ( int a, int b){
int maxi;

    if ( a > b){
        maxi=a;
    }
    else {
        maxi=b;
    }
    printf(" le nombre maximal est %d: \n", maxi);

    return 0 ;
}*/
int main (int argc, char *argv[]){ 
int n1,n2;
/*while (0)
{*/
    printf(" tapez la valeur de n1 : \n");
    scanf("%d",&n1);
    printf(" tapez la valeur de n2 : \n ");
    scanf("%d",&n2);
    
   //while(isalpha(n1)==0 && isalpha(n2)==0 && n1!=n2) {
        if((isalpha(n1)==0 && isalpha(n2)==0 && n1!=n2)){
    maximal(n1,n2);  }    
    else
    {
        printf(" ********changer le nombre **********\n"); 
    }
    
       
        /*break;
    }
    */
 
    

    //else
    
 
return 0;

}