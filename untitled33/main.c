#include <stdio.h>


int fonk(int sayi1) {

   if (sayi1 > 0) {
      return 1;
   } else if (sayi1 < 0) {
      return -1;
   } else  {
   return 0;
   }

}

int main() {
   int sayi1;
   printf("Lütfen bir sayi giriniz: ");
   scanf("%d",&sayi1);
   fonk(sayi1);
   printf("%d\n", fonk(sayi1));
   return 0;
}