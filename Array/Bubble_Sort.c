#include <stdio.h>
int main(){

    int arr[5] = {5, 3, 4, 1, 2};
    int n = 5;

    // 0 : swap 3x
    // 1 : swap 3x
    // 2 : swap 3x

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
    // i < 5-1 = i< 4 = perulangan i 3 kali
        for (int j = 0; j < n - 1 - i; j++) {
        // j < 5-1 = j < 4 = perulangan j 3 kali
            if (arr[j] > arr[j + 1]) {
                // kalo arr[0] > arr[0+1] 
                // kalo arr[0] > arr[1] 
                // 5>3 : true
                int temp = arr[j];
                // temp = arr[0]
                // temp = 5

                arr[j] = arr[j + 1];
                // arr[0] = arr[0 +1]
                // arr[0] = arr[1]
                // arr[0] = 3
                arr[j + 1] = temp;
                // arr[0 + 1] = 5
                // arr[1] = 5
    
                // arr[0] = 3
                // arr[0] = 5
            }
        }
    }



    // Menampilkan hasil
    printf("Hasil setelah Bubble Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}