#include <stdio.h>

int main(void) {
    float a;
    float b;
    printf("lütfen gidilecek yolu mil cinsinden yazınız:\n");
    scanf("%f", &a);
    b = a*1.609344;
    printf("gidilen yol = %f mil\n" , a);
    printf("gidilen yolu = %f mil\n" , b);
    return 0;
}