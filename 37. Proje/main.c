#include <stdio.h>

int ayristir(int a,int *b,int *c, int *d, int *e){
    if (a>-10000 && a<10000) {
    } else {
        printf("Hatalı sayı girdiniz.");
    }
    *b=a%10;
    *c=(a/10)%10;
    *d=(a/100)%10;
    *e=(a/1000);

}

int main(void) {
int a,b,c,d,e;
    printf("Lütfen 4 basamaklı bir sayı giriniz: ");
    scanf("%d",&a);

    ayristir(a,&b,&c,&d,&e);

    printf("binler: %d\n yuzler: %d\n onlar: %d\n birler: %d\n", e,d,c,b);
    return 0;
}