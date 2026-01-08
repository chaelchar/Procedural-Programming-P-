#include <stdio.h>

int main(){
    long int belanjaan;
    long int total = 0;
    double harga;
    while (1)
    {
        printf("input harga -> ");
        scanf("%ld",&belanjaan);
        total += belanjaan;
        printf("total belanjaan: %ld\n",total);
        if (belanjaan == 0)
        {
            break;
        }
        
    }
    
    if (total > 500000 && total < 1000000)
    {
        harga = total * 0.1;
    }else if(total > 1000000){
        harga = total * 0.15;
    }
    printf("total yang harus dibayarkan: %.1lf\n",harga);
    

    return 0;
}