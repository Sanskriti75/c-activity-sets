#include<stdio.h>
void input(float *height, float *base);
void find_area(float base,float height,float *area);
void output(float base,float height,float area);
int main()
{
    float height,area,base;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}
void input(float *height,float *base)
{
    printf("Enter the base of Triangle\n");
    scanf("%f" ,base);
    printf("Enter the height of Triangle\n");
    scanf("%f",height);
}
void find_area(float base,float height,float *area)
{
    *area=0.5*base*height;

}
void output(float base, float height, float area)
{
    printf("Base:%f\n",base);
    printf("Height:%f\n",height);
    printf("Area:%f\n",area);
}