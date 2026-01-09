#include <stdio.h>
int main(){

   char teks[] = "saya belajar bahasa C";
   char *token = strtok(teks," ");
   while (token != NULL)
   {
    printf("%s\n",token);
    token = strtok(NULL," ");
    }

    // kalau ada banyak , ; : | 
    char teks_2[] = "Belajar,pemrograman;C:sangat|menyenangkan";
    char *pisah = strtok(teks_2,",;:|");
    while (pisah != NULL)
    {
        printf("%s\n",pisah);
        pisah = strtok(NULL,",;:|");
    }

    return 0;
}