#include <stdio.h>
int count_zeroes(int arr[], int low, int high) {
    if (low == high) {
        if (arr[low] == 0) {
            return 1;
        } else {
            return 0;
        }
    }
    int mid = (low + high) / 2;
    int left_zeroes = count_zeroes(arr, low, mid);
    int right_zeroes = count_zeroes(arr, mid + 1, high);
    return left_zeroes + right_zeroes;
}
int main() {
    int m;
    scanf("%d", &m);
    int arr[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    int zeroes = count_zeroes(arr, 0, m - 1);
    printf("%d\n", zeroes);
    return 0;
}