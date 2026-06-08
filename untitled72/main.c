#include <stdio.h>

struct zaman {
    int bassaat,bassaniye,basdakika, sonsaat,sondakika, sonsaniye;
};

  void farkbul(struct zaman z1) {

      int farksaat, farkdakika, farksaniye;

      farksaat=z1.sonsaat - z1.bassaat;
      farkdakika=z1.sondakika - z1.basdakika;
      farksaniye=z1.sonsaniye - z1.bassaniye;

      if (farksaniye<0) {
          z1.sonsaniye+= 60;
          z1.sondakika-=1;
      }

      if (farkdakika<0) {
          z1.sondakika+= 60;
          z1.sonsaat-=1;
      }

      if (z1.bassaat>z1.sonsaat) {
          printf("Hatalı sayılar girdiniz!");
      }else {
          printf("%d:%d:%d",farksaat,farkdakika,farksaniye);
      }
  }

int main(void) {

      struct zaman z1;

      printf("Lütfen başlangıç zamanınızı giriniz: ");
      scanf("%d:%d:%d", &z1.bassaat,&z1.basdakika,&z1.bassaniye);

      printf("Lütfen son zamanınızı giriniz: ");
      scanf("%d:%d:%d" , &z1.sonsaat,&z1.sondakika ,&z1.sonsaniye);

      farkbul(z1);

    return 0;
}