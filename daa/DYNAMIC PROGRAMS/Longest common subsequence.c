#include <stdio.h>
#include <string.h>

int LCS(const char *A, const char *B) {
    int m = strlen(A);
    int n = strlen(B);
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0; 
            } else if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = (dp[i - 1][j] > dp[i][j - 1]) ? dp[i - 1][j] : dp[i][j - 1]; 
            }
        }
    }
    return dp[m][n];
}

int main() {
    char A[100], B[100];
    scanf("%s", A);
    scanf("%s", B);

    int length = LCS(A, B);
    printf("%d\n", length);

    return 0;
}
