#include <stdio.h>

void twoSum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                printf("[%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No solution found\n");
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;

    int n = sizeof(arr) / sizeof(arr[0]);

    twoSum(arr, n, target);

    return 0;
}
