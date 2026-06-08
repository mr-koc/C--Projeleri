#include <stdio.h>

int mukemmelyaz(int a, int b) {

    for (a+1; a<b-1; a++) {
        printf("%d\n", a);
    }
    return b-1;
}


int main() {
    int a,b;
    int sonuc=0;
    printf("baslangıç sayısını yazınız: ");
    scanf("%d", &a);
    printf("Son sayıyı yazınız: ");
    scanf("%d", &b);
    sonuc=mukemmelyaz(a,b);
    printf("%d", sonuc);

    return 0;
}