#include <iostream>
#include <stdio.h>

int main()
{
    int ta,tk,tp,Rata;
    printf("Masukkan Nilai Tes Akademik:");scanf("%d",&ta);
    printf("Masukkan Nilai Tes Keterampilan:");scanf("%d",&tk);
    printf("Masukkan Nilai Tes Psikologi:");scanf("%d",&tp);
    Rata=(ta+tk+tp)/3;
    if (Rata>=75){
        if((ta>tk)&&(ta>tp))
            {printf("Diterima dan ditempatkan dibagian administrasi");}
        else if((tk>ta)&&(tk>tp))
            {printf("Diterima dan ditempatkan dibagian Produksi");}
        else if((tp>tk)&&(tp>ta))
            {printf("Diterima dan ditempatkan di bagian Pemasaran");}

    }
    else
        printf("ANDA TIDAK TIDAK DITERIMA :(");
    return 0;
}
