#include <stdio.h>

void toplamPara(int a50, int a25, int a10, int a5, int *lira, int *kurus) {

    int toplamKurus;

    toplamKurus = (a50 * 50) + (a25 * 25) + (a10 * 10) + (a5 * 5);

    *lira = toplamKurus / 100;

    *kurus = toplamKurus % 100;
}

int main(void) {

    int adet50, adet25, adet10, adet5;

    int sonucLira, sonucKurus;

    printf("50Krs miktarini giriniz: ");
    scanf("%d", &adet50);

    printf("25Krs miktarini giriniz: ");
    scanf("%d", &adet25);

    printf("10Krs miktarini giriniz: ");
    scanf("%d", &adet10);

    printf("5Krs miktarini giriniz: ");
    scanf("%d", &adet5);

    toplamPara(adet50, adet25, adet10, adet5, &sonucLira, &sonucKurus);


    printf("-------------------------\n");
    printf("Toplam parasal deger %d Lira %d Kurustur\n", sonucLira, sonucKurus);

    return 0;
}