#include <stdio.h>

int main() {
    FILE *dosya1;
    FILE *dosya2;
    FILE *dosya3;

    char ad1[50], soyad1[50];
    int burs1;

    char ad2[50], soyad2[50];
    int burs2;

    int i;
    int ayni;

    dosya1 = fopen("/Users/alikoc/Desktop/DOSYALAR/valilik.txt", "r");
    dosya3 = fopen("/Users/alikoc/Desktop/DOSYALAR/ortak.txt", "w");

    if (dosya1 == NULL) {
        return 0;
    }

    while (fscanf(dosya1, "AD: %s SOYAD: %s BURS MİKTARI: %d\n", ad1, soyad1, &burs1) != EOF) {

        dosya2 = fopen("/Users/alikoc/Desktop/DOSYALAR/koruma.txt", "r");

        if (dosya2 != NULL) {
            while (fscanf(dosya2, "AD: %s SOYAD: %s BURS MİKTARI: %d\n", ad2, soyad2, &burs2) != EOF) {

                ayni = 1;

                i = 0;
                while (ad1[i] != '\0' || ad2[i] != '\0') {
                    if (ad1[i] != ad2[i]) {
                        ayni = 0;
                        break;
                    }
                    i++;
                }

                if (ayni == 1) {
                    i = 0;
                    while (soyad1[i] != '\0' || soyad2[i] != '\0') {
                        if (soyad1[i] != soyad2[i]) {
                            ayni = 0;
                            break;
                        }
                        i++;
                    }
                }

                if (ayni == 1) {
                    fprintf(dosya3, "%s %s\n", ad1, soyad1);
                }
            }
            fclose(dosya2);
        }
    }

    fclose(dosya1);
    fclose(dosya3);

    return 0;
}