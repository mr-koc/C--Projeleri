#include <stdio.h>

struct zaman {
    int saniye;
};

void fonk(int *saat, int *dakika, int *saniye, int eklenensaniye) {
    int yenisaat;
    int yenidakika;
    int yenisaniye;
    int toplamsaniye;

    toplamsaniye = (*saat)*(3600)+(*dakika)*(60)+(*saniye);



    yenisaat = ((toplamsaniye + eklenensaniye)/3600)%24;
    yenidakika = ((toplamsaniye + eklenensaniye)%3600)/60;
    yenisaniye = ((toplamsaniye + eklenensaniye)%3600)%60;

    printf("Yeni Saat: %02d:%02d:%02d", yenisaat, yenidakika, yenisaniye);

}
int main(void) {

    int saniye, saat, dakika;
    struct zaman z;

    printf("Lütfen başlangıçtaki zamanı sırasıyla arasına iki nokta koyarak yazınız: ");
    scanf("%d:%d:%d", &saat, &dakika, &saniye);

    printf("Lütfen eklemek istediğiniz saniyeyi giriniz:");
    scanf("%d", &z.saniye);

    fonk(&saat, &dakika, &saniye, z.saniye);

    return 0;
}