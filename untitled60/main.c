#include <stdio.h>

   void aracKoltukSayisiBul(int *kisisayisi) {
        int otobussayisi, kalanboskoltuk;
      otobussayisi =*kisisayisi/46;
       kalanboskoltuk =*kisisayisi%46;

       printf("Bu tur için %d adet otobüse ihtiyaç var.\n", otobussayisi);
       printf("Turdaki boş koltuk sayısı: %d", kalanboskoltuk);
   }

int main(void) {

       int kisisayisi;

       printf("Tura kaç kişi katılacak? : ");
       scanf("%d", &kisisayisi);
       printf("------------------------------\n");
       aracKoltukSayisiBul(&kisisayisi);
    return 0;
}