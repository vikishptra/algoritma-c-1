#include <stdio.h>
int main()
{
    int pelanggan1 = 75,kertas,total,total2,kertas2,no_pelanggan1 =125;
    char charpel;
    printf("Apakah kamu pelanggan (y)/(t)? ");
    scanf("%s", &charpel);
    if(charpel == 'y' || charpel == 'Y'){
        printf("Masukkan jumlah kertas yang ingin di fotocopy : ");
        scanf("%d", &kertas);
        total=kertas*pelanggan1;
        printf("Jumlah yang di bayar oleh berlangganan : Rp%d", total);
    }else if(charpel == 't' || charpel == 'T'){
        printf("Masukkan jumlah kertas yang ingin di fotocopy : ");
        scanf("%d", &kertas2);
        if(kertas2 < 100){
            total2=kertas2*150;
            printf("Jumlah yang di bayar : Rp%d", total2);
        }else if((kertas2 <= 100) || (kertas2 <= 200)){
            total2=no_pelanggan1*100;
            printf("Jumlah yang di bayar : Rp%d", total2);
        }else if(kertas2 > 200){
            total2=kertas2*80;
            printf("Jumlah yang di bayar : Rp%d", total2);
        }
    }else{
        printf("Mohon pilih y / t");
    }
}


