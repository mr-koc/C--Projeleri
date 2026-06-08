#include <stdio.h>

   void bulEnbEnk(int *sayi) {
       int enbuyukrakam, enkucukrakam;
       int a,b,c,d;

       d=(*sayi)%10;
       c=((*sayi)/10)%10;
       b=((*sayi)/100)%10;
       a=((*sayi)/1000)%10;

       if (a>b && a>c && a>d) {
           enbuyukrakam=a;
       } else if (b>c && b>d && b>a) {
           enbuyukrakam=b;
       }else if (c>d && c>a && c>b) {
           enbuyukrakam=c;
       } else if (d>a && d>b && d>c) {
           enbuyukrakam=d;
       }
       if (a<b && a<c && a<d) {
           enkucukrakam=a;
       }else if (b<c && b<d && b<a) {
           enkucukrakam=b;
       } else if (c<d && c<a && d<b) {
           enkucukrakam=c;
       }else if (d<a && d<b && a<c) {
           enkucukrakam=d;
       }

       printf("En büyük rakam : %d\n", enbuyukrakam);
       printf("En küçük rakam : %d", enkucukrakam);
   }

int main(void) {

       int sayi;

       printf("Sayıyı giriniz: ");
       scanf("%d", &sayi);
       printf("-------------------\n");

       bulEnbEnk(&sayi);
    return 0;
}