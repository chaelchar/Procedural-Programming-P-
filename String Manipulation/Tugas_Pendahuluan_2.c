#include <stdio.h>
#include <string.h>

int main(){

   char string[50];
   char string_2[50];
   printf("input string-1 -> ");
   fgets(string,sizeof(string),stdin);
   
   printf("input string-2 -> ");
   fgets(string_2,sizeof(string_2),stdin);

    string[strcspn(string,"\n")] = '\0';
    string_2[strcspn(string_2,"\n")] = '\0';

    if (strcmp(string,string_2) == 0)
    {
        printf("%s dan %s sama\n",string,string_2);
    } else if(strcmp(string,string_2) < 0){
        printf("%s lebih kecil dari %s\n",string,string_2);
    }else{
        printf("%s lebih besar dari %s\n",string_2, string);
    }

    
   

    return 0;
}