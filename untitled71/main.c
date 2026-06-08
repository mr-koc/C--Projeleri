#include <stdio.h>

struct zaman {

      int saniye, dakika, saat;
};

void fonk(int *ciksaniye, struct zaman z1) {

    int saat1,dak1, san1;
    int yenisaat, yenidakika, yenisaniye;

    saat1 = *ciksaniye/3600;
    dak1 = (*ciksaniye%3600)/60;
    san1 = (*ciksaniye%3600)%60;

    yenisaat = z1.saat - saat1;
    yenidakika = z1.dakika - dak1;
    yenisaniye = z1.saniye - san1;

    if (yenisaniye < 0) {
        yenisaniye += 60;
        yenidakika -= 1;
    }

    if (yenidakika < 0) {
        yenidakika += 60;
        yenisaat -= 1;
    }

    if (yenisaat < 0) {
        yenisaat += 24;
    }

    printf("Şuanki zaman: %2d:%2d:%2d", yenisaat, yenidakika, yenisaniye);
}

int main() {

    struct zaman z1;
    int ciksaniye;

    printf("Lütfen şuanki zamanı (saat:dakika:saniye) cinsinden giriniz: ");
    scanf("%d:%d:%d", &z1.saat, &z1.dakika, &z1.saniye);

    printf("Lütfen çıkarmak istediğiniz saniyeyi giriniz: ");
    scanf("%d", &ciksaniye);

    fonk(&ciksaniye, z1);




    return 0;
}