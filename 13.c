
#include <stdio.h>
// 从键盘输入一个数，求出这个数的阶乘，即 n!。
int main()
{
    int i,n;
    double sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum*i;
    printf("%d!=%lf",n,sum);
    printf("\n");
    return 0;
}