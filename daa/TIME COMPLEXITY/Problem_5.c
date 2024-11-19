#include<stdio.h>
int count=0;
void reverse(int n)
{
   int rev = 0, remainder;
   count++;
   count++;
   while (n != 0)
   {
        count++;//for while loop true
        remainder = n % 10;
        count++;
        rev = rev * 10 + remainder;
        count++;
        n/= 10;
        count++;
   }
   count++;// for while false
printf("%d",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    reverse(n);
    return 0;

}