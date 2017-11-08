#include <iostream>
#include <stdio.h>

int main()
{
    float bil1,bil2,hasil,pil;
    printf("Menu Matematika\n");
    printf("1.Penjumlahan\n");
    printf("2.Pengurangan\n");
    printf("3.Pembagian\n");
    printf("4.Perkalian\n");
    printf("Masukkan Bilangan 1:");scanf("%f",&bil1);
    printf("Masukkan Bilangan 2:");scanf("%f",&bil2);
    printf("Masukkan Pilihan:");scanf("%f",&pil);
    if (pil>=1 && pil<=4){
        if(pil==1)
            hasil=bil1+bil2;
        else if(pil==2)
            hasil=bil1-bil2;
        else if(pil==3)
            hasil=bil1/bil2;
        else
            hasil=bil1*bil2;
        printf("Hasil Operasi tersebut=%3.2f",hasil);
        }
    else
        printf("ERORR BRO");
    return 0;
}
