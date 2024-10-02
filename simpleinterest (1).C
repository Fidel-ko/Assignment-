//program to find simple interest 
/*Author:Fidel 
date 17/09/2021
*/
#include <stdio.h>

int main()
{
    int a,b,c ;
    int simpleinterest; 
    
    printf ("enter the principal amount:");
    scanf ("%d",&a);
    printf ("enter the time (in years):");
    scanf ("%d",&b);
    printf ("enter the rate in(%%):");
    scanf ("%d",&c);
    simpleinterest=(a*b*c)/100;
    printf ("the simple interest is:%d,simple interest");
   return 0;
   }