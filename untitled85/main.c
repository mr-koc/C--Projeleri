#include <stdio.h>

void fonk(int *ds, int *ys, int *bs, float *net) {

    *net = (*ds - (*ys + *bs)) - (*ys)/(4.0);
}

int main(void) {

    char kaynakdosya[500];
    char cevapdosya[500];
    char kaynakIcerik[500] = {0};
    char cevapIcerik[500] = {0};

    int k = 0;
    int t = 0;
    int r = 0;
    float net = 0.0;

    int i;
    int sayac = 0;

    printf("Lutfen ogrenci bilgilerinin oldugu dosyanin adini giriniz: ");
    scanf("%s", kaynakdosya);

    printf("Lutfen olusturulacak dosyanin uzantisini giriniz (Cevap Anahtari): ");
    scanf("%s", cevapdosya);

    FILE *f = fopen(kaynakdosya, "r");
    FILE *g = fopen(cevapdosya, "r");

    if (f == NULL || g == NULL) {
        printf("DOSYA ACILAMIYOR!\n");
    } else {

        sayac = 0;
        while(fscanf(f, " %c", &kaynakIcerik[sayac]) != EOF) {
            sayac++;
        }

        sayac = 0;
        while(fscanf(g, " %c", &cevapIcerik[sayac]) != EOF) {
            sayac++;
        }

        for (i = 0; kaynakIcerik[i] != '\0' && cevapIcerik[i] != '\0'; i++) {

            if (kaynakIcerik[i] == cevapIcerik[i]) {
                k++;
            } else if (kaynakIcerik[i] == '*') {
                r++;
            } else {
                t++;
            }
        }

        fclose(f);
        fclose(g);
    }

    fonk(&k, &t, &r, &net);

    printf("Dogru: %d, Yanlis: %d, Bos: %d, Net: %.2f\n", k, t, r, net);

    return 0;
}