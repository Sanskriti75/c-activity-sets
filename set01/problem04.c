// the sum of two numbers by call by reference // 
  #include<stdio.h>
void input(int *a,int *b);
void add(int a,int b,int *sum);
void output(int a,int b,int sum);
int main()
{
    int a,b,sum;
    input(&a,&b);
add(a,b,&sum);
output(a,b,sum);
return 0;

}
void input(int *a,int *b)
{
    printf("Enter the value a and b\n");
    scanf("%d %d",a,b);


}
void add(int a, int b, int *sum)
{
    *sum=a+b;

}
void output(int a,int b,int sum)
{
    printf("Sum of %d and %d is %d\n",a,b,sum);
}