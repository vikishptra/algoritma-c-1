#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,bil=5,j,i;
    for (i=1;i<=bil;i++ ){
        for (j=1;j<=bil - i ; j++ ){
            printf(" ");
        }
        for (a=1;a<= 2*i -1 ;a++ ){
            printf("%d", i);
        }
         printf("\n");
     }
}


