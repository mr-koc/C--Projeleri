#include <stdio.h>

int main(void) {
   int i=0;

    while (i<=10) {
        if (i==5) {
        i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}