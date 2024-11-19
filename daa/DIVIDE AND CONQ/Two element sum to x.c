#include<stdio.h>
int main(){
    int n,x,flag=1;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
            if(arr[i]+arr[j]==x){
                printf("%d\n%d", arr[j],arr[i]);
                flag=0;
                break;
            }
        }
    }
    if(flag!=0){
        printf("No");
    }
}