#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int n;
    scanf("%d", &n);
    int* arr1 = (int*)malloc(n * sizeof(int));
    int* arr2 = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    qsort(arr1, n, sizeof(int), compare);
    qsort(arr2, n, sizeof(int), compare);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr1[i] * arr2[n - i - 1];
    }
    printf("%d\n", sum);
    free(arr1);
    free(arr2);
    return 0;
}