#include <stdio.h>

enum BULAN{
    JANURAY = 1,
    FEBRUARI,
    MARET,
    APRIL,
    MEI,
    JUNI,
    JULY,
    AGUSTUS,
    SEPTEMBER,
    OKTOBER,
    NOVEMBER,
    DESEMBER
};

int main(){
    enum BULAN bulan;
    int nomor_bulan;
    printf("Masukan Nomor Bulan: ");
    scanf("%d",&nomor_bulan);

    switch (nomor_bulan)
    {
    case JANURAY:
        printf("Bulan ke-%d termasuk dalam Musim Dingin\n",JANURAY);
    break;
    case FEBRUARI:
        printf("Bulan ke-%d termasuk dalam Musim Dingin\n",FEBRUARI);
    break;
    case MARET:
        printf("Bulan ke-%d termasuk dalam Musim Semi\n",MARET);
    break;
    case APRIL:
        printf("Bulan ke-%d termasuk dalam Musim Semi\n",APRIL);
    break;
    case MEI:
        printf("Bulan ke-%d termasuk dalam Musim Semi\n",MEI);
    break;
    case JUNI:
        printf("Bulan ke-%d termasuk dalam Musim Panas\n",JUNI);
    break;
    case JULY:
        printf("Bulan ke-%d termasuk dalam Musim Panas\n",JULY);
    break;
    case AGUSTUS:
        printf("Bulan ke-%d termasuk dalam Musim Panas\n",AGUSTUS);
    break;
    case SEPTEMBER:
        printf("Bulan ke-%d termasuk dalam Musim Gugur\n",SEPTEMBER);
    break;
    case OKTOBER:
        printf("Bulan ke-%d termasuk dalam Musim Gugur\n",OKTOBER);
    break;
    case NOVEMBER:
        printf("Bulan ke-%d termasuk dalam Musim Gugur\n",NOVEMBER);
    break;
    case DESEMBER:
        printf("Bulan ke-%d termasuk dalam Musim Dingin\n",DESEMBER);
    break;
    default:
        printf("Error Code Anda\n");
        break;
    }


   return 0;
}