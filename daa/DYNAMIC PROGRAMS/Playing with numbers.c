#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long long int arr[n + 1]; 
    for (int i = 0; i <= n; i++) {
        arr[i] = 0; 
    }
    arr[0] = 1; 
    for (int i = 1; i <= n; i++) {
        if (i - 1 >= 0) {
            arr[i] += arr[i - 1]; 
        }
        if (i - 3 >= 0) {
            arr[i] += arr[i - 3]; 
        }
    }
    printf("%lld", arr[n]); 
    return 0;
}
