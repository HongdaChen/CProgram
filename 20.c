// 实例要求从键盘输入任意年份的整数 N，通过程序运行判断该年份是否为闰年
// 判断任意年份是否为闰年，需要满足以下条件中的任意一个：
// ① 该年份能被 4 整除同时不能被 100 整除；
// ② 该年份能被400整除

#include <stdio.h>
int main()
{
    int year,a;
    printf("请输人年份：\n");
    scanf("%d",&year);
    if(year%400==0)
        a=1;
    else
    {
        if(year%4==0&&year%100!=0)
            a=1;
        else
            a=0;
    }
    if(a==1)
    {
        printf("%d 此年是闰年\n",year);
    }
    else
    {
        printf("%d 此年非闰年\n",year);
    }
    return 0;
}




