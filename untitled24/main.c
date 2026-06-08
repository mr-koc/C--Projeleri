#include <stdio.h>

int main() {
    int ay;
    int kisisayisi;
    int toplam_tutar;

    printf("Kaçıncı ayı gireceksiniz: ");
    scanf("%d", &ay);

    printf("Kaç kişi olacaksınız: ");
    scanf("%d", &kisisayisi);

    switch (ay) {
        case 1:
        printf("Kişi başı 150 TL");
            toplam_tutar=kisisayisi*150;
        break;

        case 2:
        printf("Kişi başı 150 TL");
            toplam_tutar=kisisayisi*150;
        break;

            case 3:
            printf("Kişi başı 50 TL");
            toplam_tutar=kisisayisi*50;
            break;

            case 4:
            printf("Kişi başı 50 TL");
            toplam_tutar=kisisayisi*50;
            break;

            case 5:
            printf("Kişi başı 50 TL");
            toplam_tutar=kisisayisi*50;
            break;

            case 6:
            printf("Kişi başı 250 TL");
            toplam_tutar=kisisayisi*250;
            break;

            case 7:
            printf("Kişi başı 250 TL");
            toplam_tutar=kisisayisi*250;
            break;

            case 8:
            printf("Kişi başı 250 TL");
            toplam_tutar=kisisayisi*250;
            break;

            case 9:
            printf("Kişi başı 50 TL");
            toplam_tutar=kisisayisi*50;
            break;

            case 10:
            printf("Kişi başı 50 TL");
            toplam_tutar=kisisayisi*50;
            break;

            case 11:
            printf("Kişi başı 50 TL");
            toplam_tutar=kisisayisi*50;
            break;

            case 12:
            printf("Kişi başı 50 TL");
            toplam_tutar=kisisayisi*50;
            break;
    }
    printf("\ntoplam_tutar=%d", toplam_tutar);

    return 0;
}