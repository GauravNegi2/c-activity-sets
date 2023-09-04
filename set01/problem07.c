#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main()
{
 int n, i, sum=0;
 printf("Enter the value of n\n"),
 scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
    sum=sum+i;
 }
 
 printf("sum of %d is %d\n",n,sum);
  return 0;
}
int add(int n, int sum)
{
    int i=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int sum)
{
    printf("sum of is %d\n",sum);
}
