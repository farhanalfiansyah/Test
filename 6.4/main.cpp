#include <iostream>
#include <stdio.h>

int main()
{
    int na;
    printf("Masukkan Nilai Angka:");scanf("%d",&na);
    if(na<=40)
        printf("Nilai Huruf adalah E");
    else if(na>40 && na<=55)
        printf("Nilai Huruf adalah D");
    else if(na>55 && na<=60)
        printf("Nilai Huruf adalah C");
    else if(na>60 && na<=80)
        printf("Nilai Huruf adalah B");
    else if(na>80 && na<=100)
        printf("Nilai Huruf adalah A");
    else
        printf("ERORR");
    return 0;
}
