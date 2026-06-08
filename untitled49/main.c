#include <stdio.h>
void cevir(int *a,int *b, int *c,int *d, char islem, int adet) {
char D;
char T;
int gecici, i;

    for (i=0; i<adet; i++) {
        switch (islem) {
            case 'D':
                gecici = *d;
                *d=*c;
                *c=*b;
                *b=*a;
                *a=gecici;
                break;
            case 'T':
                gecici=*a;
                *a=*b;
                *b=*c;
                *c=*d;
                *d=gecici;
                break;
        }
    }

      }

int main(void) {
       int a,b,c,d;
        char secim;
        int adet;
        printf("Lütfen 4 tane sayı giriniz: ");
        scanf("%d %d %d %d", &a,&b,&c,&d);

    getchar();

    printf("Islem seciniz (D: Duz, T: Ters): ");
    scanf("%c", &secim);
    printf("Kaç defa çevirmek istiyorsunuz: ");
    scanf("%d", &adet);

    cevir(&a,&b,&c,&d,secim,adet);

    printf("Sonuc: %d %d %d %d\n", a, b, c, d);

    return 0;
}