#include <stdio.h>

int ara(int dizi[][3], int satirsayisi, int sutunsayisi, int aranan, int *satir, int *sutun) {
      int i, j;

    for (i=0;i<satirsayisi;i++) {
        for (j=0;j<sutunsayisi;j++) {
            if (dizi[i][j]== aranan);
            {
                *satir= i+1;
                *sutun = j+1;
                return 1;
            }
        }
    }
    return 0;
}
int main(void) {
   int dizi[3][3] = {
       {1,2,3},
       {4,5,6},
       {7,8,9}
   };
    int aranan, sonuc;
    int bulsatir, bulsonuc;

    printf("Dizi içerisinde aranacak sayıyı giriniz: ");
    scanf("%d", &aranan);

    sonuc= ara(dizi,3,3,aranan,&bulsatir,&bulsonuc);

    if (sonuc == 1) {
        printf("Giridiğiniz sayı dizinin içinde bulunmaktadır.\n");
        printf("sayınız %d. satir ve %d. sutunda bulunmaktadır.", bulsatir, bulsonuc);
    } else {
        printf("Sayınız dizi içerisinde bulunmamaktadır.");
    }
    return 0;
}