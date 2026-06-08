#include <stdio.h>

int fonk(int sayi1, int sayi2) {
    int buyuk, kat;
    if (sayi1 > sayi2) {
        buyuk=sayi1;
    } else {
        buyuk=sayi2;
    }
    kat = buyuk;

    while (1) {
        if (kat%sayi1==0 && kat%sayi2==0) {
            return kat;
        } else
            kat+=buyuk;

    }
}
  int main() {
    int sayi1, sayi2;
    printf("Lütfen sayi1 ve sayi2 yi giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);
    fonk(sayi1, sayi2);
    printf("%d",fonk(sayi1, sayi2));
    return 0;
}
