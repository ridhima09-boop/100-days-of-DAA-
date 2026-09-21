#include <stdio.h>

int longest_increasing_streak(int temperatures[], int n) {
    if (n == 0)
        return 0;

    int max_streak = 1;
    int current_streak = 1;

    for (int i = 1; i < n; i++) {
        if (temperatures[i] > temperatures[i - 1]) {
            current_streak++;

            if (current_streak > max_streak)
                max_streak = current_streak;
        }
        else {
            current_streak = 1;
        }
    }

    return max_streak;
}

int main() {
    int temperatures[] = {10, 12, 15, 14, 16, 18, 20};
    int n = sizeof(temperatures) / sizeof(temperatures[0]);

    printf("Longest increasing streak: %d\n",
           longest_increasing_streak(temperatures, n));

    return 0;
}
