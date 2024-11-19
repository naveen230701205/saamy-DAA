#include<stdio.h>
int count=0;
void Factor(int num)
{
    for (int i = 1; i <= num;++i)
    {
     count++; // for loop i value True
     if (num % i== 0)
     {
          count++;
          //printf("%d ", i);
     }
     count++; //for i false
     }
     count++;
     printf("%d",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    Factor(n);
    return 0;
}