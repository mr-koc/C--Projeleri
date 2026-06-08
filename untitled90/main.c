#include <stdio.h>

int main(void)
{
    int a,b,c;
    int sayi;
    printf("Lütfen sırayla sayıları giriniz: ");
    scanf("%d %d %d",&a,&b,&c);
    sayi=100*a+10*b+c;
    printf("%d",sayi);

 return 0;
}