#include <stdio.h>

int main(){
    int x;
    printf("Masukan sebuah bilangan : ");
    scanf("%d",&x);
    printf("bilangan ini adalah : %s",
            x > 0 ? "positif":
            x < 0 ? "negatif": "nol"
            );

    return 0;
}