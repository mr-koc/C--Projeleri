#include <stdio.h>

int main(void) {

    int terimSayisi;
    int sayac = 0;

    int sayi1 = 0;
    int sayi2 = 1;
    int sonrakiSayi;

    printf("Kaç terimi görmek istiyorsunuz: ");
    scanf("%d", &terimSayisi);

    printf("Fibonacci Dizisi:\n");

    do {
        printf("%d", sayi1);

        sonrakiSayi = sayi1 + sayi2;
        sayi1 = sayi2;
        sayi2 = sonrakiSayi;

        sayac++;

    } while (sayac < terimSayisi);



    return 0;
}





