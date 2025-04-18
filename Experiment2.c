#include <stdio.h>
#include <string.h>

int findMax(int n, int matrix[n][n]) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

int main() {
    char str[100];
    printf("Enter a word: ");
    scanf("%s", str);

    int len = strlen(str);
    int limit = 10;
    int base = limit - len;
    int n = 3;
    int matrix[n][n];

    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = base + i + j;
            printf("%12u", matrix[i][j]);
        }
        printf("\n");
    }

    int maxVal = findMax(n, matrix);
    printf("Maximum value in the matrix is: %d\n", maxVal);

    return 0;
}
