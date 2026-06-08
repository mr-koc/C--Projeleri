#include <stdio.h>

void fonk(char secim) {
    double miktar, sonuc;

    switch (secim) {
        case 'o':
            printf("Ne kadar onsunuz var: ");
            scanf("%lf", &miktar);
            sonuc = miktar * 28.3495231;
            printf("Sonuc: %f gram\n", sonuc);
            break;

        case 'g':
            printf("Ne kadar graminiz var: ");
            scanf("%lf", &miktar);
            sonuc = miktar / 28.3495231;
            printf("Sonuc: %f ons\n", sonuc);
            break;

        default:
            printf("Hatali bir harf girdiniz.\n");
    }
}

int main() {
    char harf;

    printf("Grama cevirmek icin 'o', Onsa cevirmek icin 'g' tuslayin: ");
    scanf(" %c", &harf);

    fonk(harf);

    return 0;
}