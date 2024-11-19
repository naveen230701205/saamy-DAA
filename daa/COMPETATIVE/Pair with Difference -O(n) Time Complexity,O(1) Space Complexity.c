#include <stdio.h>
int findPair(int arr[], int n, int k) 
{
    int i = 0, j = 1;
    while (i < n && j < n) {
    if (i != j && arr[j] - arr[i] == k) {
        return 1;
        } 
    else if (arr[j] - arr[i] < k) {
        j++;
    } 
    else {
        i++;
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