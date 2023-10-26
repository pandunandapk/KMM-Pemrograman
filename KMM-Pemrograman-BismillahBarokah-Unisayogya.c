#include <stdio.h>

int Bahan1() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == 2 || j == 0 || j == 4) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int Bahan2() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == 2 || i == 4 || (i == 1 && j == 0) || (i == 3 && j == 4))  {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int Bahan3() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 || j == 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    Bahan1();
    Bahan2();
    Bahan3();
}
