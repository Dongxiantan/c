#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("please input a number:");
    scanf("%d",&a);
    printf("please input a number again:");
    scanf("%d",&b);
    c=a-b;
    printf("the difference between a minus b is:%d\n",c);
    return 0;
}
