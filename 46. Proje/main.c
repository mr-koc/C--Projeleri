#include <stdio.h>

   void serinoCoz(int *a) {
       int s1,s2,s3,s4;
       char A,B,C,D,E,F,G,H,I;

       s1= (*a)/1000;
       s2= ((*a)/100)%10;
       s3= ((*a)/10)%10;
       s4= (*a)%10;

       if (*a>999 && *a<10000) {
       }else {
           printf("Hatalı değer girdiniz.");
       }
       if (s1==1) {
           s1='A';
       }else if (s1==2) {
           s1='B';
       }else if (s1==3) {
           s1='C';
       }else if (s1==4) {
           s1='D';
       }else if (s1==5) {
           s1='E';
       }else if (s1==6) {
           s1='F';
       }else if (s1==7) {
           s1='G';
       }else if (s1==8) {
           s1='H';
       }else if (s1==9) {
           s1='I';
       }

       printf("Bu araç %c blokta %d%d nolu dairenin %d. aracıdır.", s1,s2,s3,s4);

   }

int main(void) {

       int a;
    printf("Lütfen 4 haneli seri numaranızı giriniz: ");
       scanf("%d",&a);

       serinoCoz(&a);

    return 0;
}