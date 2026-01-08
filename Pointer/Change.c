#include <stdio.h>

void change(int *x){
    *x = 6;
}

int main(){
    int a;
    a = 5;
    change(&a);
    printf("hasil mengubah angka -> %d\n",a);
    

    return 0;
}