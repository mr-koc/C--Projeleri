#include <stdio.h>

struct ogrenci {
    char adsoyad[10][30];
    float ort[10];
};

int main(void) {
    struct ogrenci o1;
    int i;
    char yedekadsoyad;
    float yedekort;

    for (i = 0; i < 10; i++) {
        printf("%d. Kişinin Adı,Soyadı: ", i+1);
        scanf(" %[^\n]", o1.adsoyad[i]);

        printf("%d. Ortalaması: ", i+1);
        scanf("%f", &o1.ort[i]);
    }

    for (i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10-1-i; j++) {
            if (o1.ort[j] < o1.ort[j+1]) {

                yedekort = o1.ort[j];
                o1.ort[j] = o1.ort[j+1];
                o1.ort[j+1] = yedekort;


                for (int k = 0; k < 30; k++) {
                    yedekadsoyad = o1.adsoyad[j][k];
                    o1.adsoyad[j][k] = o1.adsoyad[j+1][k];
                    o1.adsoyad[j+1][k] = yedekadsoyad;
                }
            }
        }
    }

    printf("\n------------LİSTE--------------\n");
    for (i = 0; i < 10; i++) {
        printf("%s %f\n", o1.adsoyad[i], o1.ort[i]);
    }

    return 0;
}