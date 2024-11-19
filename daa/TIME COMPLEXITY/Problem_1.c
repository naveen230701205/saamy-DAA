#include<stdio.h>
int count = 0;
void function (int n)
{
    count++;
    int i= 1;
    int s =1;
    while(s <= n)
    {
        count++;
         i++;
        count++;
         s += i;
        count++;
     }
     count++;
}  
int main(){
    int n;
    scanf("%d",&n);
    function(n);
    count++;
printf("%d",count);
}