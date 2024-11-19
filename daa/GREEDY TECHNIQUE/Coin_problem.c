#include <stdio.h>
int minCoins(int V) {
    int denoms[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = sizeof(denoms) / sizeof(denoms[0]);
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        int currCount = V / denoms[i];
        count += currCount;
        V %= denoms[i];
    }
    return count;
}
int main() {
    int V;
    scanf("%d", &V);

    int minCount = minCoins(V);
    printf("%d\n", minCount);
    return 0;
}