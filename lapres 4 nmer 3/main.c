#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suhu;
    printf("Masukkan besar suhu:");scanf("%d",&suhu);
    if ((suhu>=0)&&(suhu<=100))
        printf("Benda berbentuk cair");
    if (suhu<0)
        printf("Benda berbentuk padat");
    else
        printf("benda berbentuk gas");
    return 0;
}
