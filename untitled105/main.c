#include <stdio.h>

struct oyuncular {
    char ad[50];
    char soyad[50];
    int oynmac;
    int hatpas;
    int ispas;
};


int metinaynimi(char birinci[], char ikinci[]) {
    int i = 0;
    while(birinci[i] != '\0' || ikinci[i] != '\0') {
        if(birinci[i] != ikinci[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

void metnikopyala(char hedef[], char kaynak[]) {
    int i = 0;
    while(kaynak[i] != '\0') {
        hedef[i] = kaynak[i];
        i++;
    }
    hedef[i] = '\0';
}

int ekle(struct oyuncular liste[], char gelenad[], char gelensoyad[], int oynmac, int hatpas, int ispas, int kisisayisi) {
    int i = 0;
    int bulundu = 0;

    for (i = 0; i < kisisayisi; i++) {
        if (metinaynimi(liste[i].ad, gelenad) == 1 && metinaynimi(liste[i].soyad, gelensoyad) == 1) {
            liste[i].oynmac += oynmac;
            liste[i].hatpas += hatpas;
            liste[i].ispas += ispas;
            bulundu = 1;
            break;
        }
    }

    if (bulundu == 0) {

        if (kisisayisi < 20) {
            metnikopyala(liste[kisisayisi].ad, gelenad);
            metnikopyala(liste[kisisayisi].soyad, gelensoyad);
            liste[kisisayisi].oynmac = oynmac;
            liste[kisisayisi].hatpas = hatpas;
            liste[kisisayisi].ispas = ispas;
            kisisayisi++;
        }
    }

    return kisisayisi;
}

void yazdir(struct oyuncular liste[], int kisisayisi) {
    FILE *g = fopen("/Users/alikoc/Desktop/DOSYALAR/cikti.txt", "w");
    int i;

    if (g == NULL) {
        printf("HATA: Yazilacak dosya acilamadi!\n");
        return;
    }

    fprintf(g, "Ad Soyad Oynadigi_Mac Hata Dogru\n");

    for (i = 0; i < kisisayisi; i++) {
        fprintf(g, "%s %s %d %d %d\n", liste[i].ad, liste[i].soyad, liste[i].oynmac, liste[i].hatpas, liste[i].ispas);
    }

    printf("Islem tamamlandi. Sonuclar 'cikti.txt' dosyasina yazildi.\n");
    fclose(g);
}

int main(void) {
    struct oyuncular o[20];
    int toplamkisisayisi = 0;

    char okunanad[50];
    char okunansoyad[50];
    int okunanispas;
    int okunanhatpas;

    FILE *f = fopen("/Users/alikoc/Desktop/DOSYALAR/d.txt", "r");
    if (f == NULL) {
        printf("Dosya açılamadı! Lütfen dosya yolunu kontrol edin.\n");
        return 1;
    }

    while (fscanf(f, "%s %s %d %d", okunanad, okunansoyad, &okunanhatpas, &okunanispas) != EOF) {
        toplamkisisayisi = ekle(o, okunanad, okunansoyad, 1, okunanhatpas, okunanispas, toplamkisisayisi);
    }

    fclose(f);

    yazdir(o, toplamkisisayisi);

    return 0;
}