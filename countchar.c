#include <stdio.h>
#include <string.h>
#define MAXLEN 10
//4.输入一串字符串,以"$"结束,分别统计其中数字字符0,1,2,...,9出现的次数.

int main(){

    //输入字符
    char chr[MAXLEN];
    int len=0;
    char temp;
    printf("输入一串字符串,以$结束");
    fflush(stdout);
    while(1){
        scanf("%c",&temp);
        if(len==MAXLEN||temp=='$') break;
        else chr[len++]=temp;
    }

    //统计
    int n[len];
    //初始化
    for(int i=0;i<len;i++){
        n[i]=0;
    }
    for(int i=0;i<len;i++){
        if(chr[i]>='0'&&chr[i]<='9') n[chr[i]-'0']+=1;
    }

    //打印
    for(int i=0;i<len;i++){
        printf("%d有%d个\n",i,n[i]);
        fflush(stdout);
    }


    return 0;
}
