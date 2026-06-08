#include <stdio.h>

void ilerideolanibul(int *gun1, int *ay1, int *yil1, int *gun2, int *ay2, int *yil2) {

    if (*gun1 > 30 || *gun1 < 1 || *gun2 > 30 || *gun2 < 1 ||
        *ay1 > 12 || *ay1 < 1 || *ay2 > 12 || *ay2 < 1) {
        printf("Hatalı tarih değeri girdiniz!\n");
        return;
        }

    if (*yil1 > *yil2) {
        printf("İleride olan tarih (1. Tarih): %d/%d/%d\n", *gun1, *ay1, *yil1);
    }
    else if (*yil2 > *yil1) {
        printf("İleride olan tarih (2. Tarih): %d/%d/%d\n", *gun2, *ay2, *yil2);
    }
    else if (*ay1 > *ay2) {
        printf("İleride olan tarih (1. Tarih): %d/%d/%d\n", *gun1, *ay1, *yil1);
    }
    else if (*ay2 > *ay1) {
        printf("İleride olan tarih (2. Tarih): %d/%d/%d\n", *gun2, *ay2, *yil2);
    }
    else if (*gun1 > *gun2) {
        printf("İleride olan tarih (1. Tarih): %d/%d/%d\n", *gun1, *ay1, *yil1);
    }
    else if (*gun2 > *gun1) {
        printf("İleride olan tarih (2. Tarih): %d/%d/%d\n", *gun2, *ay2, *yil2);
    }
    else {
        printf("İki tarih birbirinin aynısıdır.\n");
    }
}

int main(void) {
    int gun1, ay1, yil1, gun2, ay2, yil2;

    printf("Birinci tarihi giriniz (Gun Ay Yil): ");
    scanf("%2d%2d%4d", &gun1, &ay1, &yil1);

    printf("İkinci tarihi giriniz (Gun Ay Yil): ");
    scanf("%2d%2d%4d", &gun2, &ay2, &yil2);

    ilerideolanibul(&gun1, &ay1, &yil1, &gun2, &ay2, &yil2);

    return 0;
}