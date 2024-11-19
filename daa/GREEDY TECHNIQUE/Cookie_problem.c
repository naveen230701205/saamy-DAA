#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return ((int*)a - (int*)b);
}
int fcc(int g[], int gSize, int s[], int sSize){
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);
    int i = 0, j = 0;
    int count = 0;
    while (i < gSize && j < sSize) {
        if (s[j] >= g[i]) {
            count++;
            i++;
        }
        j++;
    }
    return count;
}
int main() {
    int gSize, sSize;
    scanf("%d", &gSize);
    int g[gSize];
    for (int i = 0; i < gSize; i++) {
        scanf("%d", &g[i]);
    }
    scanf("%d", &sSize);
    int s[sSize];
    for (int i = 0; i < sSize; i++) {
        scanf("%d", &s[i]);
    }
    printf("%d\n", fcc(g, gSize, s, sSize));
    return 0;
}