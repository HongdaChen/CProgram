#include <stdio.h>

/*任意输入 3 个整数，编程实现对这 3 个整数由小到大进行排序。*/
int main()
{
    int a,b,c,t;    /*定义4个基本整型变量a、b、c、t*/
    printf("Please input a,b,c:\n");    /*双引号内的普通字符原样输出并换行*/
    scanf("%d,%d,%d",&a,&b,&c);    /*输入任意3个数*/
    if(a>b)    /*如果a大于b,借助中间变量t实现a与b值的互换*/
    {
        t = a;
        a = b;
        b = t;
    }
    if(a>c)    /*如果a大于c,借助中间变景t实现a与c值的互换*/
    {
        t = a;
        a = c;
        c = t;
    }
    if(b>c)    /*如果b大于c,借助中间变量t实现b与c值的互换*/
    {
        t = b;
        b = c;
        c = t;
    }
    printf("The order of the number is:\n");
    printf("%d,%d,%d",a,b,c);    /*输出函数顺序输出a、b、c的值*/
    return 0;
}