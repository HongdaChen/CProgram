#include <stdio.h>
#include <string.h>
//14.编写程序，不用标准函数 strcat（），将两个字符串连接起来。

int main(){
    char str[100],str1[50],str2[50];
    printf("输入一个字符串str1\n");
    scanf("%s",str1);
    printf("输入一个字符串str2\n");
    scanf("%s",str2);//这里不要写&

    //cat
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len1;i++){
        str[i]=str1[i];
    }
    for(int i=len1;i<len1+len2;i++){
        str[i]=str2[i-len1];
    }
    //print
    printf("连接后的字符串为：\n");
    for(int i=0;i<len1+len2;i++){
        printf("%c",str[i]);
    }
    printf("\n");


    return 0;
}