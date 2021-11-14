#include <stdio.h>
int main()
{
   int bil1,bil2,bil3,max;
   printf("Masukkan bilangan 1 anda : ");
   scanf("%d", &bil1);
   printf("Masukkan bilangan 2 anda : ");
   scanf("%d", &bil2);
   printf("Masukkan bilangan 3 anda : ");
   scanf("%d", &bil3);
   max=bil1;
   if(bil2>max){
       max=bil2;
       if(bil3>max){
       max=bil3;
        }
    } printf("Print  max %d", max);
}

