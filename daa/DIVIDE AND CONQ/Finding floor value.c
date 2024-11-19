#include <stdio.h>
int floorSearch(int arr[], int n, int x)
{
	if (x >= arr[n - 1])
		return n - 1;
	if (x < arr[0])
		return -1;
	for (int i = 1; i < n; i++)
		if (arr[i] > x)
			return (i - 1);

	return -1;
}
int main()
{
    int n;
    int x;
    scanf("%d",&n);
	int arr[n];
	for (int i = 0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	n = sizeof(arr) / sizeof(arr[0]);
	int index = floorSearch(arr, n - 1, x);
	if (index == -1)
		printf("%d", x);
	else
		printf("%d", arr[index]);
	return 0;
}