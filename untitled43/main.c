#include <stdio.h>

int main(void) {
    int dizi[] = {10, 20, 30, 40, 50};

    int* tanimlayici= dizi;

    int toplam=0;
    int i;

    for (i=0;i<5;i++) {
        toplam += *(tanimlayici + i);
    }
    printf("toplam = %d", toplam);
    return 0;
}

//int dizi[] = {10, 20, 30, 40, 50}; olsun.
//Diziyi işaret eden bir pointer tanımlayın ve bu pointer üzerinden for döngüsü ile
//dizinin elemanlarının toplamını ekrana basan kodu yazın.