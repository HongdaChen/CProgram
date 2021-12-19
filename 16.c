// 从键盘输入两个正整数 a 和 b，求其最大公约数和最小公倍数。
#include <stdio.h>
int main()
{
    //实例中用到了辗转相除法来求最大公约数。在求最小公倍数时要清楚最大公约数和最小公倍数的关系，即两数相乘的积除以这两个数的最大公约数就是最小公倍数。
    int a,b,c,m,t;
    printf("请输入两个数:\n");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    m=a*b;
    c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    printf("最大公约数是:\n%d\n",b);
    printf("最小公倍数是:\n%d\n",m/b);
}