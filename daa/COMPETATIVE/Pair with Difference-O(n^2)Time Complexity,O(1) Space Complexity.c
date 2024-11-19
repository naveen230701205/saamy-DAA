#include <stdio.h>
int findPair(int arr[], int n, int k) 
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] - arr[i] == k) {
                return 1; 
            }
        }
    }
    return 0; 
}
int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    int result = findPair(arr, n, k);
    printf("%d\n", result);

    return 0;
}
