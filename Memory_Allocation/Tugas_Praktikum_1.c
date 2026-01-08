#include <stdio.h>
int main(){

    int arr[5];
    for (int i = 0; i < 6; i++)
    {
        printf("input nilai elemen ke-%d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    int angka;
    int hitung = 0;
    for (int i = 0; i < 6; i++)
    {
        angka = arr[i];
        for (int j = 0; j < 6; j++)
        {
            if (angka == arr[j])
            {
                hitung++;
            }
            
        }
        if (hitung == 1)
        {
            printf("angka %d muncul %d kali\n",angka,hitung);
            hitung = 0;
        } else if(hitung >= 2){
            i += hitung-1;
            printf("angka %d muncul %d kali\n",angka,hitung);
            hitung = 0;
        }
    }

    return 0;
}