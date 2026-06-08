#include <stdio.h>

int main() {

    int i;

    char buyukHarf;
    char kucukHarf;

    for (i = 65; i <= 84; i++) {


        buyukHarf = (char)i;


        kucukHarf = buyukHarf + 32;


        printf("%d%c%c\n", i, buyukHarf, kucukHarf);
    }

    return 0;
}