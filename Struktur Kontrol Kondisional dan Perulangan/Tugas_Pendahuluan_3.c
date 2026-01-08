#include <stdio.h>

int main(){
    // bilangan prima    : 2,3,5,7,9,11,13..
    // bilangan non-prima: 4,6,8,10
    
    int x;
   
    for (int i = 0; i < 2; i++)
    {
         printf("input nilai x: ");
         scanf("%d",&x);
         if (x == 2 || (x%2) == 1)
        {
            printf("Angka %d adalah bilangan prima\n",x);
        } else if(x%2 == 0 && x > 0){
            printf("Angka %d bukan bilangan prima\n",x);
        } else{
            printf("inputan anda tidak valid\n");
        }

    printf("\n");
    }
    
   

    return 0;
}