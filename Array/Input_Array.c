#include <stdio.h>
int main(){

    int n;
    printf("input panjang array -> ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("input array ke-%d -> ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("nilai array ke-%d -> %d\n",i+1,arr[i]);
    }


    return 0;
}