#include <stdio.h>
int input();
int add(int a, int b , int *sum);
void output(int a, int b, int sum);

int main()
{
     int a, b, c, sum;
    a=input();
    b=input();
    sum=add(a,b &sum);
    output(a, b, sum);
    return 0;

}

int input()
{
    int x;
    printf("Enter the value\n");
    scanf("%d", &x);
    return x;
}


void add(int a, int b,int *sum)
{
    sum=a+b;
}

void output(int a,int b ,int sum)
{
    printf("The sum of the %d and %d is %d",a, b, sum);
}
