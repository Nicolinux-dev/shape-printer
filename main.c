#include <stdio.h>

void triangle() {
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= (10 - i); ++j) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); ++k) {
            printf("#");
        }
        printf("\n");
    }
}

void triangleReverse() {
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= (10 - i); ++j) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); ++k) {
            printf("#");
        }
        printf("\n");
    }
}

void square() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 25; ++j) {
            printf("#");
        }
        printf("\n");
    }
}

void rectangle() {
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j < 50; ++j) {
            printf("#");
        }
        printf("\n");
    }
}

int main(void) {
    triangle();
    printf("\n");
    triangleReverse();
    printf("\n");
    square();
    printf("\n");
    rectangle();
    return 0;
}
