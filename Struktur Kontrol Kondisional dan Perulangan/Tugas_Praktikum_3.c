#include <stdio.h>

int main(){
    int a;
    int b;
    int n;
    int jumlah = 0;
    printf("input nilai awal -> "); scanf("%d",&a);
    printf("input nilai b    -> "); scanf("%d",&b);
    printf("input total      -> "); scanf("%d",&n);

    for (int i = 0; i <= n ; i++)
    {
        jumlah = jumlah + (a + ((i-1) * b));
    }
    // 0 2 4 6 8 10

    printf("jumlah deret Aritmatika : %d\n",jumlah);

    return 0;
}