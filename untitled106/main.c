#include <stdio.h>

struct personel {
    char ad[50];
    char soyad[50];
    float satis;
};

int metnikarsilastir(char s1[], char s2[]) {
    int i=0;
    while (s1[i]==s2[i]) {
        if (s1[i] == '\0') {
            return 0;
        }
        i++;
    }

    if (s1[i]>s2[i]) {
        return 1;
    }else {
        return -1;
    }
}

void metinkopyala(char hedef[], char kaynak[]) {
    int i=0;
    while (kaynak[i] != '\0'){
    hedef[i] = kaynak[i];
    i++;
}
    hedef[i] = '\0';
}

void ekledegistir(struct personel p[], int boyut) {
    FILE *f = fopen("/Users/alikoc/Desktop/DOSYALAR/d.txt", "r");

    if (f == NULL) {
        printf("Dosya Açılmıyor!\n");
        return;
    }
    float enbuyuksatis = 0.0;
    int i;

    for (i=0;i<boyut;i++) {
        fscanf(f, "%s %s %f", p[i].ad, p[i].soyad ,&p[i].satis);

        if (p[i].satis > enbuyuksatis) {
            enbuyuksatis = p[i].satis;
        }
    }
    fclose(f);

    for (i=0;i<boyut;i++) {
        p[i].satis = enbuyuksatis-p[i].satis;
    }
}

void siralayarakyaz(struct personel p[], int boyut) {
    int i,j;
    struct personel gecici;

    for (i=0;i<boyut-1;i++) {
        for (j=0;j<boyut;j++) {

            if (metnikarsilastir(p[j].ad, p[j+1].ad)==1) {

                metinkopyala(gecici.ad, p[j].ad);
                metinkopyala(p[j].ad, p[j+1].ad);
                metinkopyala(p[j+1].ad, gecici.ad);

                metinkopyala(gecici.soyad, p[j].soyad);
                metinkopyala(p[j].soyad, p[j+1].soyad);
                metinkopyala(p[j+1].soyad, gecici.soyad);

                gecici.satis, p[j].satis;
                p[j].satis, p[j+1].satis;
                p[j+1].satis, gecici.satis;

            }
        }
    }

    FILE *g = fopen("/Users/alikoc/Desktop/DOSYALAR/cikis.txt", "w");
    if (g == NULL) {
        printf("Dosya Açılmıyor\n");
        return;
    }
    for (i=0;i<boyut;i++) {
        fprintf(g,"%s %s %f\n", p[i].ad, p[i].soyad ,p[i].satis);
    }
    fclose(g);
    printf("İşlem başarılı.");
}

int main() {

    struct personel calisanlar[12];

    ekledegistir(calisanlar,12);

    siralayarakyaz(calisanlar,12);


    return 0;
}