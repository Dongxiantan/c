#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("请输入一数字：");
    scanf("%d",&a);
    printf("请再输入一个数字：");
    scanf("%d",&b);
    c=a+b;
    printf("它们的和是%d\n",c);
    return 0;
}
