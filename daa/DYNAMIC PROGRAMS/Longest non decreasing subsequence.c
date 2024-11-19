#include <stdio.h>

int length_of_lnds(int* sequence, int n) {
    if (n == 0) return 0;

    int dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = 1; // Initialize DP array
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (sequence[j] <= sequence[i]) {
                dp[i] = (dp[i] > dp[j] + 1) ? dp[i] : (dp[j] + 1);
            }
        }
    }

    // Find the maximum value in dp array
    int max_length = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] > max_length) {
            max_length = dp[i];
        }
    }

    return max_length;
}

int main() {
    int sequence[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    int n = sizeof(sequence) / sizeof(sequence[0]);
    printf("%d\n", length_of_lnds(sequence, n));
    return 0;
}
