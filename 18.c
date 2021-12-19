// 在 C 语言中区分字母的大小写，利用 ASCII 码中大写字母和小写字母之间的转换关系（差值为 32），可以将小写字母转换为大写字母。
// 编写程序实现，从键盘上输入一个小写字母，按回车键，程序将该小写字母转换为大写字母，并输出其 ASCII 值。
#include <stdio.h>
int main()
{
    char a,b;
    printf("输入一个小写字母:\n");
    a=getchar();
    b=a-32;
    printf("转换后的字母为：%c，%d\n",b,b);
    return 0;
}