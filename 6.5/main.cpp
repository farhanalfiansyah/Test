#include <iostream>
#include <stdio.h>

int main()
{
    int a;
    printf("Masukkan Angka :");scanf("%d",&a);
    if (a>0 && a<8)
        if(a==1)
            printf("Minggu");
        else if(a==2)
            printf("Senin");
        else if(a==3)
            printf("Selasa");
        else if(a==4)
            printf("Rabu");
        else if(a==5)
            printf("Kamis");
        else if(a==6)
            printf("Jum'at");
        else

            printf("Sabtu");
    else
        printf("Hari Tidak Valid");
    return 0;
}
