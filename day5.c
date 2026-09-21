#include <stdio.h>

int main() {
    int n, temp;
    int count1 = 0, count0 = 0;
    int current = 0, max = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    if (temp == 0) {
        count0 = 1;
    }

    while (temp > 0) {
        if (temp % 2 == 1) {
            count1++;
            current++;

            if (current > max)
                max = current;
        }
        else {
            count0++;
            current = 0;
        }

        temp = temp / 2;
    }

    printf("Number of 1s: %d\n", count1);
    printf("Number of 0s: %d\n", count0);
    printf("Consecutive 1s: %d\n", max);

    return 0;
}
