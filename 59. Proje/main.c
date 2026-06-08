#include <stdio.h>

struct Kitap {
    int id;
    char ad[60];
    char yazar[60];
    float fiyat;
};

int main() {
    struct Kitap k1;

    printf("Kitap ID: ");
    scanf("%d", &k1.id);

    printf("Kitap Adi: ");
    scanf(" %[^\n]s", k1.ad);

    printf("Yazar Adi: ");
    scanf(" %[^\n]s", k1.yazar);

    // Fiyat kontrol döngüsü
    do {
        printf("Fiyat: ");
        scanf("%f", &k1.fiyat);

        if (k1.fiyat < 0) {
            printf("Fiyat negatif olamaz, tekrar giriniz.\n");
        }
    } while (k1.fiyat < 0);
    
    printf("\n--- Girilen Kitap Bilgisi ---\n");
    printf("ID    : %d\n", k1.id);
    printf("Kitap : %s\n", k1.ad);
    printf("Yazar : %s\n", k1.yazar);
    printf("Fiyat : %.2f TL\n", k1.fiyat);

    return 0;
}