#include <stdio.h>

float cevirTL(float a, float b, float c, float d, float e, float f, float g, float h) {

    return a*e + b*f + c*g + d*h;
}

int main(void) {

     int sonuc=0;
     float a,b,c,d;
    float e,f,g,h;
     printf("Lutfen sırasıyla kaçar tane bozukluk olduğunu yazınız: ");
    scanf("%f %f %f %f" , &a, &b, &c, &d);
    e=8.2;
        f=6.8;
            g=4.0;
                h=3.15;
    sonuc=cevirTL(a,b,c,d,e,f,g,h);
    printf("%d", sonuc);
    return 0;
}