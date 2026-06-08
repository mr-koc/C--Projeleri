#include <stdio.h>

struct ogrenci {

    char ad[10][20];
    char soyad[10][20];
    float ort[10];
};

int main() {
    struct ogrenci o1;
    int i, j, k;

    float yedekOrt;
    char yedekAd;
    char yedekSoyad;

    for (i = 0; i < 10; i++) {
        printf("%d. Ogrenci (Ad Soyad Ortalama): ", i+1);
        scanf("%s %s %f", o1.ad[i], o1.soyad[i], &o1.ort[i]);
    }

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - 1 - i; j++) {

            if (o1.ort[j] < o1.ort[j+1]) {

                yedekOrt = o1.ort[j];
                o1.ort[j] = o1.ort[j+1];
                o1.ort[j+1] = yedekOrt;

                for (k = 0; k < 20; k++) {

                    yedekAd = o1.ad[j][k];
                    o1.ad[j][k] = o1.ad[j+1][k];
                    o1.ad[j+1][k] = yedekAd;

                    yedekSoyad = o1.soyad[j][k];
                    o1.soyad[j][k] = o1.soyad[j+1][k];
                    o1.soyad[j+1][k] = yedekSoyad;
                }
            }
        }
    }

    printf("\n--- LISTE ---\n");
    for (i = 0; i < 10; i++) {
        printf("%s %s  : %.1f\n", o1.ad[i], o1.soyad[i], o1.ort[i]);
    }

    return 0;
}