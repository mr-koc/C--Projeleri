#include <stdio.h>

int main() {
    int a;
    int fact=1;
    printf("lutfen bir sayi giriniz:");
    scanf("%d", &a);
    while (a !=0) {
        printf("%d\n" , a);
        fact = fact * a;
        a--;
    }
    printf("%d\n", fact);
    return 0;
}