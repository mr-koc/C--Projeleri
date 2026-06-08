#include <stdio.h>

   int fonk(int a, int b) {

    if (a <= 1 ) {
        printf("asal değildir.");
    }else if (a==2) {
        printf("asaldır.");
    }
       for ( b=2; b<a; b++) {
           if (a%b==0) {
               printf("asal değildir.");
               return 0;
           }
       }
       printf("asaldır.");
   }


int main(void) {
       int a,b;
       printf("Lütfen bir sayı giriniz: ");
       scanf("%d",&a);
       fonk(a,b);
    return 0;
}