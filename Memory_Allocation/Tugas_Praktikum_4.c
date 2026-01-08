#include <stdio.h>
int main(){

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("input elemen ke-%d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    int max;
    max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    printf("nilai array terbesar -> %d\n",max);

    return 0;
}