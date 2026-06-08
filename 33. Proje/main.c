#include <stdio.h>

int toplam;
  int *fonk (int *sayi1, int *sayi2) {
     toplam= (*sayi1) + (*sayi2);
      return &toplam;
  }
int main(void) {
      int x=10;
      int y=5;

      int* sonucadres = fonk(&x,&y);
      printf("toplam = %p\n", *sonucadres);

    return 0;
}