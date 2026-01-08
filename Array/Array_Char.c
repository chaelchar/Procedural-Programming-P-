#include <stdio.h>
int main(){
    int arr[3] = {'a','b','c'};
    for (int i = 0; i < 3; i++)
    {
        // ASCII
        printf("array ke-%d\n",arr[i]);
    }
    
    printf("\n");

    // kalau pakai %c baru bisa
    for (int j = 0; j < 3; j++)
    {
        printf("array ke-%c\n",arr[j]);
    }

    return 0;
}