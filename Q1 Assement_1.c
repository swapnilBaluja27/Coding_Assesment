#include <stdio.h>

void printSquares(int N, int M) {
    int area = N * M;
    while (area > 0) {
        int side = (int) sqrt(area);
        printf("%dx%d, ", side, side);
        area -= side * side;
    }
}

int main() {
    int N = 6, M = 5;
    printf("Input: N = %d, M = %d\nOutput: ", N, M);
    printSquares(N, M);
    printf("\n");
    return 0;
}