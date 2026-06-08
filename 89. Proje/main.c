#include <stdio.h>

int main(void) {
    int x=5, y=6, z=8, a=3, b=4, sonuc;
    sonuc= x<=y && a!=b && x*y <= z*b;
    printf("%d\n", sonuc);
    x=x<<2;
    sonuc/=x;
    printf("%d\n",sonuc);
    return 0;
}