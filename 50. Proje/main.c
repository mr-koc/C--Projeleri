#include <stdio.h>

  void cevir(int *sayi) {
      float m, cm, dm, mm;

      m = (*sayi)/1000;
      dm = (*sayi)/100 - (m)*10;
      cm = (*sayi)/10 - (m*100 + (dm)*10);
      mm = (*sayi) - (m*1000 + (dm)*100 + (cm*10));

      printf("Sayınız %f metre, %f desimetre, %f santimetre, %f milimetredir.", m,dm,cm,mm);
  }

int main(void) {

      int sayi;
      printf("Lütfen sayınızı mm cinsinden giriniz: ");
      scanf("%d", &sayi);

      cevir(&sayi);
    return 0;
}