#include <stdio.h>

int aralikTopla(int baslangic, int bitis) {
    int toplam = 0;
    int i;

    for (i = baslangic; i <= bitis; i++) {
        toplam = toplam + i;
    }

    return toplam;
}

int main() {
    int sayi1, sayi2;
    int sonuc;

    printf("--- Aralık Toplama Programi ---\n");

    printf("Başlangıç değerini giriniz: ");
    scanf("%d", &sayi1);

    printf("Bitiş değerini giriniz: ");
    scanf("%d", &sayi2);

    sonuc = aralikTopla(sayi1, sayi2);

    printf("\n--- SONUC ---\n");
    printf("%d ile %d arasındaki (dahil) sayıların toplamı: %d\n", sayi1, sayi2, sonuc);


    return 0;
}