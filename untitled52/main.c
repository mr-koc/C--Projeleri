#include <stdio.h>

void tekciftsayi(int *a, int *teksayi, int *ciftsayi) {
int b,c,d,e,f,g;

    if (*a>-1000000 && *a<1000000) {
    }else {
        printf("Kurallara uygun sayı girmediniz.");
    }

    b= *a%10;
    c= (*a/10)%10;
    d= (*a/100)%10;
    e= (*a/1000)%10;
    f= (*a/10000)%10;
    g= (*a/100000)%10;

    if (b%2==1) {
        (*teksayi)++;
    } else if (b%2==0) {
        (*ciftsayi)++;
    } if (c%2==1) {
        (*teksayi)++;
    } else if (c%2==0) {
        (*ciftsayi)++;
    }  if (d%2==1) {
        (*teksayi)++;
    } else if (d%2==0) {
        (*ciftsayi)++;
    }  if (e%2==1) {
        (*teksayi)++;
    } else if (e%2==0) {
        (*ciftsayi)++;
    }  if (f%2==1) {
        (*teksayi)++;
    } else if (f%2==0) {
        (*ciftsayi)++;
    }  if (g%2==1) {
        (*teksayi)++;
    } else if (g%2==0) {
        (*ciftsayi)++;
    }

}

int main(void) {

    int a;
    int teksayi=0 ,ciftsayi=0;

    printf("Lütfen 6 basamklı bir sayı giriniz: ");
    scanf("%d",&a);

    tekciftsayi(&a, &teksayi, &ciftsayi);

    printf("%d adet tek sayı ve %d adet çift sayı vardır.", teksayi, ciftsayi);
    return 0;
}