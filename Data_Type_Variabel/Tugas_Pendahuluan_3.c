#include <stdio.h>
int main(){
    // Nilai akhir = (30% x UTS) + (40% x  UAS) + (30% x Tugas)
    int UTS,UAS,Tugas; 
    printf("input nilai UTS : ")  ; scanf("%d",&UTS)  ;
    printf("input nilai UAS : ")  ; scanf("%d",&UAS)  ; 
    printf("input nilai Tugas : "); scanf("%d",&Tugas);

    float Nilai_Akhir = (0.3*UTS ) + (0.4* UAS ) + (0.3 * Tugas ) ;
    printf("Hasil Nilai Akhir : %f\n",Nilai_Akhir);
    return 0;
}