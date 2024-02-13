// Write a C programm to find the sum of natural numbers till n//
#include<stdio.h>
int input_n();
int sum_n_nos(int n,int sum);
void output(int n,int sum);
int main()
{
    int sum=0,n;
    n=input_n();
    sum=sum_n_nos(n,sum);
    output(n,sum);
    return 0;
}
int input_n()
{
    int x;
    printf("Enter the value\n");
    scanf("%d" ,&x);
    return x;
}
int sum_n_nos(int n,int sum)
{
    int i;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n,int sum)
{
    printf("The sum of %d and %d is %d",n,sum);
}
