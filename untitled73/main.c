#include <stdio.h>

struct musteri {
    char adsoyad[3][20];
    int borc[3];
    char cinsiyet[3][10];
};

void fonk(struct musteri m) {
    int j, k, t;
    int geciciborc;
    char gecicihar;

    for (j = 0; j < 2; j++) {
        for (k = 0; k < 2 - j; k++) {

            if (m.borc[k] < m.borc[k+1]) {

                geciciborc = m.borc[k];
                m.borc[k] = m.borc[k+1];
                m.borc[k+1] = geciciborc;

                for (t = 0; t < 20; t++) {
                    gecicihar = m.adsoyad[k][t];
                    m.adsoyad[k][t] = m.adsoyad[k+1][t];
                    m.adsoyad[k+1][t] = gecicihar;
                }

                for (t = 0; t < 10; t++) {
                    gecicihar = m.cinsiyet[k][t];
                    m.cinsiyet[k][t] = m.cinsiyet[k+1][t];
                    m.cinsiyet[k+1][t] = gecicihar;
                }
            }
        }
    }

    printf("\n--- SIRALANMIS LISTE ---\n");
    for (t = 0; t < 3; t++) {
        printf("%s %s %d TL\n", m.adsoyad[t], m.cinsiyet[t], m.borc[t]);
    }
}

int main(void) {
    struct musteri m;
    int i;

    for (i = 0; i < 3; i++) {
        printf("%d. Kisinin adi soyadi (Girin ve Enter'a basin): ", i+1);
        scanf(" %[^\n]", m.adsoyad[i]);

        printf("Cinsiyeti ve Borcu (Ornek: Erkek 100): ");
        scanf(" %s %d", m.cinsiyet[i], &m.borc[i]);

        printf("-------------------\n");
    }

    fonk(m);

    return 0;
}