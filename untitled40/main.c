#include <stdio.h>

int main(void) {
    int sayilar[8];
    int i;
    int ciftsayisi=0;
    int cifttoplam=0;

    for ( i = 0; i < 8; i++) {
        printf("%d. sayıyı giriniz: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

   for (i=0; i < 8; i++) {
       if (sayilar[i] % 2 == 0) {
           ciftsayisi++;
           cifttoplam += sayilar[i];
       }
   }
    printf("Dizideki cift sayi adedi: %d\n", ciftsayisi);
    printf("Dizideki cift sayilarin toplami: %d\n", cifttoplam);
    return 0;
}