#include <stdio.h>

int main(void) {
    int yas;
    float boy;
    float kilo;
    float vki;

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);

    if (yas <= 17 && yas >= 13) {
    }else {
        printf("askeri okula giremezsiniz.");
    }

     printf("kilonuzu kg cinsinden giriniz: ");
     scanf("%f", &kilo);

     printf("boyunuzu metre cinsinden giriniz: ");
     scanf("%f", &boy);

    vki = kilo/(boy*boy);
    printf("vki=%f", vki);

    if (vki<24.99 && vki>18.50 ) {
      printf("askeri okula girebilirsiniz.");
    }else {
        printf("askeri okula giremezsiniz.");
    }


    return 0;
}