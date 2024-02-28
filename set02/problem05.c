// write a programe to find the GDC of two numbers//
#include<stdio.h>
int input();
int find_gcd(int a,int b);
void output(int a,int b,int gcd);
int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;

    }
    int input()
    {
        int n;
        printf("enter the number");
        scanf("%d",&n);
        return n;
    }
    int find_gcd(int a,int b)
    {
        int c=a%b;
        if(c!=0)
        {
            find_gcd(b,c);

        }
        else{
            return b;
        }
    }
    void output(int a,int b,int gcd)
    {
        printf("The HCF of a %d and b %d is %d",a,b,gcd);
    }