#include <stdio.h>

void guncelle(int *ekleneceksure) {
    int bassaat, basdakika, bassaniye;
    int saat, saniye, dakika;

    printf("Zamani giriniz (saat dakika saniye): ");

    scanf("%d %d %d", &bassaat, &basdakika, &bassaniye);

    saat = *ekleneceksure / 3600;
    dakika = (*ekleneceksure % 3600) / 60;
    saniye = (*ekleneceksure % 3600) % 60;

    bassaniye += saniye;
    basdakika += dakika;
    bassaat += saat;

    if (bassaniye >= 60) {
        basdakika += bassaniye / 60;
        bassaniye = bassaniye % 60;
    }

    if (basdakika >= 60) {
        bassaat += basdakika / 60;
        basdakika = basdakika % 60;
    }

    bassaat = bassaat % 24;

    printf("Guncel Zaman: %d:%d:%d\n", bassaat, basdakika, bassaniye);
}

int main(void) {
    int ekleneceksure;

    printf("Eklenecek sureyi saniye cinsinden giriniz: ");
    scanf("%d", &ekleneceksure);

    guncelle(&ekleneceksure);

    return 0;
}