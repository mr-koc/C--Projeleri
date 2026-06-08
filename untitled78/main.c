#include <stdio.h>

int main(void) {

    int aranannumara;
    int okunan_numara;
    char satir[256];
    int bulundu = 0;

    FILE *dosya = fopen("/Users/alikoc/Desktop/veri.dat.txt", "r");

    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    printf("Lütfen aramak istediğiniz numarayı giriniz: ");
    scanf("%d", &aranannumara);

    while (fgets(satir, 256, dosya) != NULL) {

        if (sscanf(satir, "ÖĞRENCİ NOSU: %d", &okunan_numara) == 1) {

            if (okunan_numara == aranannumara) {
                printf("\n--- KAYIT BULUNDU ---\n");

                printf("%s", satir);

                fgets(satir, 256, dosya);
                printf("%s", satir);

                fgets(satir, 256, dosya);
                printf("%s", satir);

                fgets(satir, 256, dosya);
                printf("%s", satir);

                bulundu = 1;
                break;
            }
        }
    }

    if (bulundu == 0) {
        printf("\nAradığınız numaralı kayıt bulunamadı.\n");
    }

    fclose(dosya);
    return 0;
}