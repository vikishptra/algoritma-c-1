#include <stdio.h>
#include <stdlib.h>
int main()
{
     int n,i,j,k,l,m;
    
     printf("Masukkan baris n anda : ");
     scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        for (j=1; j<= 2*n-i;j++){
            printf(" ");
        }
        for (k=1; k<=2*i-1 ; k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=n; i++){
        for (j=1; j<=n-i ; j++){
            printf(" ");
        }
        for (k=1; k<=n ; k++){
            printf("*");
        }
        for (l=1; l<=i*2-1 ;l++){
            printf(" ");
        }
        for (m=1; m<=n ;m++){
            printf("*");
        }
        printf("\n");
    }
     return 0;
}

