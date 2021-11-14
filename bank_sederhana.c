#include <stdio.h>
int main()
{
   int rekening = 100000, rekening1,tambah_saldo,uang,total_uang;
   char amount,wd;
   printf("\nRekening awal anda adalah %d ", rekening);
   printf("\nApakah anda ingin deposit (y/t)");
   scanf("%s", &amount);
   if(amount == 'Y' || amount == 'y'){
    printf("\nMasukkan jumlah uang anda : ");
    scanf("%d", &rekening1);
    tambah_saldo=rekening+rekening1;
    printf("Saldo anda %d", tambah_saldo);
    printf("\nApakah anda mau withdraw(y/t): ");
    scanf("%s", &wd);
   if(wd == 'y' || wd == 'Y' ){
        printf("\nMasukkan jumlah uang yang mau di withdraw : ");
        scanf("%d",&uang);
        if(tambah_saldo > uang){
            total_uang=tambah_saldo-uang;
            printf("Jumlah akhir saldo anda %d", total_uang);
        }else if(tambah_saldo == uang){
            total_uang=tambah_saldo-uang;
            printf("Saldo anda %d", total_uang);
        }else{
         printf("Saldo anda tidak cukup");
         printf("\nSaldo anda %d", tambah_saldo);
        }
   }else{
        printf("Saldo anda %d", tambah_saldo);
    }

   }else if(amount == 'T' || amount == 't'){
    printf("\nApakah anda mau withdraw (y/t)? : ");
    scanf("%s", &wd);
   if(wd == 'y' || wd == 'Y' ){
        printf("\nMasukkan jumlah uang yang mau di withdraw : ");
        scanf("%d",&uang);
        if(rekening > uang){
                total_uang=rekening-uang;
                printf("Jumlah akhir saldo anda %d", total_uang);
        }else if(rekening == uang){
                total_uang=rekening-uang;
                printf("Saldo anda %d", total_uang);
            }else{
                printf("Saldo anda tidak cukup");
                printf("\nSaldo anda %d", rekening);
            }
        }else if(wd == 't' || wd == 'T'){
            printf("Saldo anda %d", rekening);
        }else{
        printf("Saldo anda %d", rekening);
        }

    }else{
         printf("Mohon pilih y/t");
        printf("\nSaldo anda %d", rekening);
    }
}


