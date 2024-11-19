#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (int i = 0; i < n-1; i++) {
       
        for ( int j = i + 1; j < n; j++) {
            int t;
           
            if (a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    int sum=0,h;
    for(int i=0;i<n;i++)
    {
        h=pow(n,i);
        sum+=h*a[i];
    }
    printf("%d",sum);
}