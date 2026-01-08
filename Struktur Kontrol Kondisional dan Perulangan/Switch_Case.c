#include <stdio.h>

int main(){
    printf("1.Martabak\n2.Nasi goreng\n3.Mie goreng\n\n");
    int number;
    printf("pilih angka dari 1-3: ");
    scanf("%d",&number);

    switch(number){
        case 1:
                printf("Anda memilih Martabak\n");
            break;    
        case 2:
            printf("Anda memilih Nasi goreng\n");
            break;
        case 3:
            printf("Anda memilih Mie goreng\n");
            break;
        }
    return 0;
}