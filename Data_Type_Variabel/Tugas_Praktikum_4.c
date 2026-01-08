#include <stdio.h>
int main() {
 int nilai;
 // Input nilai ujian dari pengguna
 printf("Masukkan nilai ujian Anda: ");
 scanf("%d", &nilai);
 // Pengambilan keputusan
 if (nilai >= 60) {
 printf("Anda lulus.\n");
 } else {
 printf("Anda tidak lulus.\n");
 }

 int matematika,fisika,kimia;
 printf("input nilai matematika : ");scanf("%d",&matematika);
 printf("input nilai fisika : ");scanf("%d",&fisika);
 printf("input nilai =kimia : ");scanf("%d",&kimia);
 float rata_rata = (matematika + fisika + kimia)/3;
 if (rata_rata >= 60)
 {
    printf("CONGRATS LULUS\n");
 } else {
        printf("Kasihan ngk lulus\n");
    }
 
 return 0;
}