#include<stdio.h>
int main(){
    int t,m;
    scanf("%d", &t);
    scanf("%d", &m);
    int a[m];
    for(int i = 0; i < m; i++){
        scanf("%d",&a[i]);
        
    }
    int n;
    scanf("%d",&n);
    int b[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                printf("%d ",a[i]);
            }
        }
    }
}
