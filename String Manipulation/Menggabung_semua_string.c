#include <stdio.h>
#include <string.h>
int main(){

    char string_main[100],string[100];
    int n;
    printf("input jumlah string -> ");
    scanf("%d",&n);
    getchar();

    printf("input string utama -> ");
    fgets(string_main,sizeof(string_main),stdin);
    string_main[strcspn(string_main,"\n")] = '\0';
    for (int i = 0; i < n; i++)
    {
        printf("input string -> ");
        fgets(string,sizeof(string),stdin);
        string[strcspn(string,"\n")] = '\0';
        strcat(string_main,string);
        if (i < n)
        {
            strcat(string_main, " ");
        }
        
    }
    
    printf("string -> %s ",string_main);

    return 0;
}
