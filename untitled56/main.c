#include <stdio.h>

void bileklikCoz(int *sayi) {
    char E, K;
    int s1,s2,s3,s4,s5;

    s1= (*sayi)/10000;
    s2= ((*sayi)/1000)%10;
    s3= ((*sayi)/100)%10;
    s4= ((*sayi)/10)%10;
    s5= (*sayi)%10;

    if (s1==1) {
        s1= 'E';
    } else if (s2==2) {
        s2= 'K';
    }

    printf("Cinsiyet (E: Erkek, K: Kız)   : %d\n", s1);
    printf("Hafta                         : %d%d\n", s2,s3);
    printf("Sıra Numarası                 : %d%d\n", s4,s5);
}

int main(void) {

     int sayi;

    printf("Lütfen bileklik numaranızı giriniz: ");
    scanf("%d",&sayi);
    bileklikCoz(&sayi);




    return 0;
}