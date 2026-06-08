#include <stdio.h>

struct daire {
    char ad[50];
    char soyad[50];
    float aidat;
};

int metin_ayni_mi(char birinci[], char ikinci[]) {
    int i = 0;
    while (birinci[i] != '\0' || ikinci[i] != '\0') {
        if (birinci[i] != ikinci[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

void metin_kopyala(char hedef[], char kaynak[]) {
    int i = 0;
    while (kaynak[i] != '\0') {
        hedef[i] = kaynak[i];
        i++;
    }
    hedef[i] = '\0';
}

int ekle(struct daire liste[], int kisi_sayisi, char gelen_ad[], char gelen_soyad[], float gelen_miktar) {
    int i;
    int bulundu = 0;

    for (i = 0; i < kisi_sayisi; i++) {
        if (metin_ayni_mi(liste[i].ad, gelen_ad) == 1 && metin_ayni_mi(liste[i].soyad, gelen_soyad) == 1) {
            liste[i].aidat = liste[i].aidat + gelen_miktar;
            bulundu = 1;
            break;
        }
    }

    if (bulundu == 0) {
        metin_kopyala(liste[kisi_sayisi].ad, gelen_ad);
        metin_kopyala(liste[kisi_sayisi].soyad, gelen_soyad);
        liste[kisi_sayisi].aidat = gelen_miktar;
        kisi_sayisi++;
    }

    return kisi_sayisi;
}

void yazdir(struct daire liste[], int kisi_sayisi) {
    FILE *dosya;
    int i;

    dosya = fopen("toplam.txt", "w");
    if (dosya == NULL) {
        printf("Hata: Dosya olusturulamadi!\n");
        return;
    }

    for (i = 0; i < kisi_sayisi; i++) {
        fprintf(dosya, "%s %s %.2f\n", liste[i].ad, liste[i].soyad, liste[i].aidat);
    }

    fclose(dosya);
}

int main() {
    FILE *dosya;
    struct daire apartman[15];
    int toplam_kisi_sayisi = 0;

    char okunan_ad[50];
    char okunan_soyad[50];
    float okunan_miktar;

    dosya = fopen("aidat.txt", "r");
    if (dosya == NULL) {
        printf("Hata: aidat.txt dosyasi bulunamadi!\n");
        return 1;
    }

    while (fscanf(dosya, "%s %s %f", okunan_ad, okunan_soyad, &okunan_miktar) != EOF) {
        toplam_kisi_sayisi = ekle(apartman, toplam_kisi_sayisi, okunan_ad, okunan_soyad, okunan_miktar);
    }

    fclose(dosya);

    yazdir(apartman, toplam_kisi_sayisi);

    return 0;
}