#include <stdio.h>

int main() {
    char mesaj[] = "deneme";

    printf("Eski hali: %s\n", mesaj);

    for(int i = 0; mesaj[i] != '\0'; i++) {

        if(mesaj[i] == 101) {

            mesaj[i] = 72;
        }
    }

    printf("Yeni hali: %s\n", mesaj);

    return 0;
}