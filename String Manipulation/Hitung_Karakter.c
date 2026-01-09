#include <stdio.h>
#include <string.h>
int main(){

    char target;
    char string[50];
    int i,count = 0;

    printf("input string -> ");
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")] = '\0';

    printf("input target char -> ");
    scanf("%c",&target);

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == target)
        {
            count++;
        }
    }
    printf("Target char [%c] ditemukan sebanyak -> %d\n",target,count);
    


    return 0;
}