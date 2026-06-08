#include <stdio.h>

struct uye {
    char ad[3][20],soyad[3][20];
    float ortalama[3];
};

void fonk(float o1[], char a1[][20], char s1[][20]) {
    int i,j,k;
    float yedekort;
    char yedekad;
    char yedeksoyad;

    for (i = 0; i < 3-1; i++) {
        for (j = 0; j < 3-1-i; j++) {
            if (o1[j+1] > o1[j]) {
                yedekort = o1[j];
                o1[j] = o1[j+1];
                o1[j+1] = yedekort;

                for (k=0; k<20; k++) {
                    yedekad = a1[j][k];
                    a1[j][k] = a1[j+1][k];
                    a1[j+1][k] = yedekad;

                    yedeksoyad = s1[j][k];
                    s1[j][k] = s1[j+1][k];
                    s1[j+1][k] = yedeksoyad;
                }
            }
        }
    }

    for (i = 0; i < 3; i++) {
        // float için %f, string için %s kullanıyoruz
        printf("AD: %s \t SOYAD: %s \t ORTALAMA: %.2f\n", a1[i], s1[i], o1[i]);
    }
}

int main(void) {

    int i;
    struct uye u;

    for (i = 0; i < 3; i++) {
        printf("Lütfen %d. kişinin adını, soyadını ve ortalamasını sırayla giriniz: ", i+1);
        scanf(" %s %s %f", u.ad[i], u.soyad[i], &u.ortalama[i]);
    }

    fonk(u.ortalama, u.ad, u.soyad);

    return 0;
}