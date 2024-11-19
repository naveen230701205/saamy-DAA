#include<stdio.h>
int main(){
    int n;
    int count=0;
    count++;
    scanf("%d",&n);
    if(n==1)
    {
        //printf("*");
        count++;
    }
    else{
        count++;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                count++;
                //printf("*");
                count++;
                //printf("*");
                count++;
                break;
                count++;
            }
            count=count+1;
        count=count+1;
        }
        printf("%d",count++);
    }
}