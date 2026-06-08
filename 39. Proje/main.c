#include <stdio.h>

void izincoz(int a, int *p,int *x,int *w,int *r) {
    if (a>=0 && a<=15) {
    } else {
        printf("Hatalı sayı girdiniz.");
    }
        if (a%2==0) {
         *p=0;
    }else {
         *p=1;
    }
    if ((a/2)%2==0) {
        *x=0;
    }else {
        *x=1;
    }
    if ((a/4)%2==0) {
        *w==0;
    } else {
        *w=1;
    }
    if ((a/8)%2==0) {
        *r=0;
    } else {
        *r=1;
    }
}
int main(void) {
    int a=0,e=0,b=0,c=0,d=0;


    printf("Lütfen yetki kodunuzu giriniz: ");
    scanf("%d", &a);

    izincoz(a,&e,&b,&c,&d);

    printf("r-okuma: %d\n w-yazdirma: %d\n x-calistirma: %d\n p-yazdirma: %d\n", d,c,b,e);

    return 0;
}