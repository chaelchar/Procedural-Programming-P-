#include <stdio.h>
int main(){

    int arr[4] = {10,20,30,40};
    int *p = arr;
    
    printf("Transversal dengan pointer\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ",*p);
        p++;
    }

    return 0;
}