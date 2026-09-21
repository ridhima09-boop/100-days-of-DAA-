#include <stdio.h>

int main() {
    int matrix[100][100];
    int m, n;
    int top, bottom, left, right;
    int i;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    top = 0;
    bottom = m - 1;
    left = 0;
    right = n - 1;

    printf("Spiral order: ");

    while (top <= bottom && left <= right) {

        // Left to Right
        for (i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);

        top++;

        // Top to Bottom
        for (i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);

        right--;

        // Right to Left
        if (top <= bottom) {
            for (i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);

            bottom--;
        }

        // Bottom to Top
        if (left <= right) {
            for (i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);

            left++;
        }
    }

    return 0;
}
