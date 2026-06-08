#include <stdio.h>


void permutasyonkombinasyon(int *n, int *r, char islem) {

    int i, j, k;
    int sonuc = 1;
    int sonuc2 = 1;
    int faktoriyelR;

    switch (islem) {
        case 'P':

            for (i = 0; i < *r; i++) {
                sonuc = sonuc * (*n - i);
            }
            printf("Permutasyon = %d\n", sonuc);
            break;

        case 'C':

            for (j = 0; j < *r; j++) {
                sonuc = sonuc * (*n - j);
            }

            faktoriyelR = 1;
            for (k = 1; k <= *r; k++) {
                faktoriyelR = faktoriyelR * k;
            }

            sonuc2 = sonuc / faktoriyelR;
            printf("Kombinasyon = %d\n", sonuc2);
            break;
    }
}

int main(void) {
    int n, r;
    char secim;

    printf("Lutfen islemin sayilarini yaziniz (n r): ");
    scanf("%d %d", &n, &r);

    printf("Lutfen yapmak istediginiz islemi seciniz (P veya C): ");

    scanf(" %c", &secim);

    permutasyonkombinasyon(&n, &r, secim);

    return 0;
}