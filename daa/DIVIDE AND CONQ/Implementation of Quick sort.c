#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1; 
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++; //
            swap(&arr[i], &arr[j]); 
        }
    }
    swap(&arr[i + 1], &arr[high]); 
    return i + 1; 
}
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot - 1); 
        quick_sort(arr, pivot + 1, high); 
    }
}
int main() {
    int n;
    scanf("%d", &n); 
    int arr[n]; 
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    quick_sort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");
    return 0;
}