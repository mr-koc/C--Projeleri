#include <stdio.h>

int main(void) {

    char ad[50], soyad[50], bolumu[50], dogumyeri[50], telefon[19];
    char cinsiyet, devam;
    int yasi, no;
    FILE *f = fopen("/Users/alikoc/Desktop/veri.dat.txt", "w");

    if (f == NULL) {
        printf("DOSYA AÇILAMADI!\n");
    } else {
        do {
            printf("ÖĞRENCİ BİLGİLERİ GİRİŞ EKRANI\n");
            printf("------------------------------\n");

            printf("ADI       : ");
            scanf(" %[^\n]s", ad);
            printf("SOYADI    : ");
            scanf("%s", soyad);
            printf("NO        : ");
            scanf("%d", &no);
            printf("BOLUMU    : ");
            scanf(" %[^\n]s", bolumu);
            printf("CİNSİYETİ : ");
            scanf(" %c", &cinsiyet);
            printf("DOGUMYERI : ");
            scanf("%s", &dogumyeri);
            printf("YAŞI      : ");
            scanf("%d", &yasi);
            printf("TELEFONU  : ");
            scanf(" %s", &telefon);
            printf("------------------------------\n");

            fprintf(f,"%s\n %s\n %d\n %s\n %c\n %s\n %d\n %s\n ", ad, soyad, no, bolumu, cinsiyet, dogumyeri, yasi, telefon);

            printf("KAYIT YAPMAYA DEVAM ETMEK İSTİYOR MUSUNUZ? (E/H): ");
            scanf(" %c", &devam);

        } while (devam == 'E' || devam == 'e');
        fclose(f);
        printf("\nProgram sonlandirildi. Veriler 'veri.dat' dosyasina kaydedildi.\n");


    }
    return 0;
}

