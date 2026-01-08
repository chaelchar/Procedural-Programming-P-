#include <stdio.h>

int main(){
    int nilai;
    printf("input nilai : ");
    scanf("%d",&nilai);

    if (nilai >= 85 && nilai <= 100)
    {
        printf("Grade A\n");
    }else if (nilai >= 70 && nilai < 85)
    {
        printf("Grade B\n");
    }else if (nilai >= 55 && nilai < 70)
    {
        printf("Grade C\n");
    }else if (nilai >= 40 && nilai < 55)
    {
        printf("Grade D\n");
    }else if (nilai < 40)
    {
        printf("Grade E\n");        
    }

    return 0;
}