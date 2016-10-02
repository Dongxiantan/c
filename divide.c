#include<stdio.h>
int main()
{
    double a,b,c;
    printf("请输入两个数字：");
    scanf("%lf,%lf",&a,&b);
    c=a/b;
    printf("它们的商是：%.12lf\n",c);
    return 0;
}
