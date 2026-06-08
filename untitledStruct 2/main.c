#include <stdio.h>

struct uye {
    char ad[3][20],soyad[3][20];
    float ortalama[3];
};

void fonk(float o1[], char a1[][20], char s1[][20]) {
    int i,j,k,m;
    float yedekort;
    char yedekad[20];
    char yedeksoyad[20];
    int yerdegistir;

    for(i=0;i<3-1;i++) {
        for(j=0;j<3-1-i;j++) {

            yerdegistir=0;

            for(k=0;k<3;k++) {
                char harf1 = a1[j][k];
                char harf2 = a1[j+1][k];

                if (harf1 != harf2) {
                    if (harf1 > harf2) {
                        yerdegistir =1;
                    }
                    break;
                }
                if (harf1 == '\0') {
                    break;
                }
                if (yerdegistir == 1) {
                    for (m=0;m<20;m++) {
                        yedekad[m] = a1[j][m];
                        a1[j][m] = a1[j+1][m];
                        a1[j+1][m] = yedekad[m];
                    }

                    for (m=0;m<20;m++) {
                        yedeksoyad[m] = s1[j][m];
                        s1[j][m] = s1[j+1][m];
                        s1[j+1][m] = yedeksoyad[m];
                    }
                    yedekort = o1[j];
                    o1[j] = o1[j+1];
                    o1[j+1] = yedekort;
                }
            }
        }
    }

    for (i = 0; i < 3; i++) {
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