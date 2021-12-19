#include <stdio.h>

// 自然底数 e=2.718281828…，e 的计算公式如下：
// e=1+1/1!+1/2!+1/3!+…
// 要求当最后一项的值小于 10-10 时结束。
int main()
{
    float e=1.0,n=1.0;
    int i=1;
    while(1/n>1e-10)
    {
        e+=1/n;
        i++;
        n=i*n;
    }
    printf("e的值是：%f\n",e);
    return 0;
}