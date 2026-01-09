#include <stdio.h>

enum Warna { 
    Merah,
    Hijau,
    Biru
};

int main(){
    enum Warna Pilihan;
    Pilihan = Hijau;

    printf("Nilai enum Hijau adalah %d\n", Pilihan);

    if (Pilihan == Merah)
    {
        printf("Warna yang dipilih adalah Merah\n");
    }else if(Pilihan == Hijau){
        printf("Warna yang dipilih adalah Hijau\n");
    }else if(Pilihan == Biru){
        printf("Warna yang dipilih adalah Biru\n");
    }
    
    return 0;
}