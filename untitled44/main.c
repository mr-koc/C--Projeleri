#include <stdio.h>

void sirala(double *s1, double *s2, double *s3) {

    double a = *s1;
    double b = *s2;
    double c = *s3;


    if (a > b && b > c) {
        *s1 = c; *s2 = b; *s3 = a;
    }

    else if (a > c && c > b) {
        *s1 = b; *s2 = c; *s3 = a;
    }

    else if (b > a && a > c) {
        *s1 = c; *s2 = a; *s3 = b;
    }

    else if (b > c && c > a) {
        *s1 = a; *s2 = c; *s3 = b;
    }

    else if (c > a && a > b) {
        *s1 = b; *s2 = a; *s3 = c;
    }

    else if (c > b && b > a) {
        *s1 = a; *s2 = b; *s3 = c;
    }
}

int main(void) {
    double s1, s2, s3;
    printf("Lütfen sırayla üç tane değer giriniz: ");


    scanf("%lf %lf %lf", &s1, &s2, &s3);


    sirala(&s1, &s2, &s3);

    printf("Sıralanmış hali: %.2f %.2f %.2f\n", s1, s2, s3);
    return 0;
}
