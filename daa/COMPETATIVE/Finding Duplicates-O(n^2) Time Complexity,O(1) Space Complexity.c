#include <stdio.h>
int findDuplicate(int arr[], int n) {
    int tortoise = arr[0];
    int hare = arr[0];
    do {
        tortoise = arr[tortoise];
        hare = arr[arr[hare]];
    } while (tortoise != hare);
    tortoise = arr[0];
    while (tortoise != hare) {
        tortoise = arr[tortoise];
        hare = arr[hare];
    }
    return hare;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int duplicate = findDuplicate(arr, n);
    printf("%d", duplicate);
    return 0;
}