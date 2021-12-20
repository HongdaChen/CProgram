#include <stdio.h>
#include <math.h>
//11.给出一个不多于5位数的正整数，要求∶（1）求出它是几位数;（2）分别输出每一位数字;（3）按逆序输出每一位数字，例如∶原数是321，输出为123。
int main(){
    int n;
    printf("请输入一个少于5位数到正整数：\n");
    scanf("%d",&n);

    if(n>99999||n<0){
        printf("输入不和法\n");
        return -1;
    }
    int w,q,b,s,g;
    g=n%10;n=n/10;//个位
    s=n%10;n=n/10;
    b=n%10;n=n/10;
    q=n%10;n=n/10;
    w=n%10;
    if(w>0){
        printf("为5位数\n");
        printf("依次为：%d,%d,%d,%d,%d\n",w,q,b,s,g);
        printf("逆序为：%d,%d,%d,%d,%d\n",g,s,b,q,w);
    }else if(q>0){
        printf("为4位数\n");
        printf("依次为：%d,%d,%d,%d\n",q,b,s,g);
        printf("逆序为：%d,%d,%d,%d\n",g,s,b,q);
    }else if(b>0){
        printf("为3位数\n");
        printf("依次为：%d,%d,%d\n",b,s,g);
        printf("逆序为：%d,%d,%d\n",g,s,b);
    }else if(s>0){
        printf("为2位数\n");
        printf("依次为：%d,%d\n",s,g);
        printf("逆序为：%d,%d\n",g,s);
    }else if(g>0){
        printf("为1位数\n");
        printf("依次为：%d\n",g);
        printf("逆序为：%d\n",g);
    }
    return 0;
}