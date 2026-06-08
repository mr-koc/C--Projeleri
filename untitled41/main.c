#include <stdio.h>

void kareAl(int *sayi) {

    *sayi = (*sayi) * (*sayi);
}

int main(void) {

    int x=10;

    printf("Sayının ilk değeri = %d\n" , x);

    kareAl(&x);

    printf("Sayinin son değeri = %d\n" , x);
    return 0;
}