#include <stdio.h>

struct yardim {
    char birim[10];
    float toplam;
};

int metin_kontrol(char *s1, char *s2) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0')
            return 1;
        i++;
    }
    return 0;
}

void metin_kopyala(char *hedef, char *kaynak) {
    int i = 0;
    while (kaynak[i] != '\0') {
        hedef[i] = kaynak[i];
        i++;
    }
    hedef[i] = '\0';
}

void ekle(struct yardim dizi[], int *sayac, float miktar, char *gelenBirim) {
    int i;
    int bulundu = 0;

    for (i = 0; i < *sayac; i++) {
        if (metin_kontrol(dizi[i].birim, gelenBirim) == 1) {
            dizi[i].toplam += miktar;
            bulundu = 1;
            break;
        }
    }

    if (bulundu == 0) {
        if (*sayac < 31) {
            metin_kopyala(dizi[*sayac].birim, gelenBirim);
            dizi[*sayac].toplam = miktar;
            *sayac = *sayac + 1;
        }
    }
}

void yazdir(struct yardim dizi[], int sayac) {
    struct yardim gecici;
    int i, j;
    FILE *cikis;

    for (i = 0; i < sayac - 1; i++) {
        for (j = 0; j < sayac - 1 - i; j++) {
            if (dizi[j].toplam < dizi[j+1].toplam) {
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }

    cikis = fopen("toplam.txt", "w");
    if (cikis != NULL) {
        fprintf(cikis, "Program\n");
        for (i = 0; i < sayac; i++) {
            fprintf(cikis, "%s %.2f\n", dizi[i].birim, dizi[i].toplam);
        }
        fclose(cikis);
    }
}

int main() {
    FILE *dosya;
    struct yardim yardimlar[31];
    int sayac = 0;
    float miktar;
    char birim[10];

    dosya = fopen("yardim.txt", "r");

    if (dosya != NULL) {
        while (fscanf(dosya, "%f %s", &miktar, birim) != EOF) {
            ekle(yardimlar, &sayac, miktar, birim);
        }
        fclose(dosya);
    }

    yazdir(yardimlar, sayac);

    return 0;
}