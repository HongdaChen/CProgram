#include <stdio.h>
#include <string.h>
#define MAXNUM 100
//5.输入一串字符串，以"$"结束，分别统计各大写字母出现的次数，并按字母出现的多少输出（先输出出现次数多的，次数相同的按字母表顺序输出，不出现的字母不输出）。
//思路：设置一个存储结构用于存储各个大写字母的出现次数，初始顺序按照字母表顺序，当扫描完字符串并统计完后，对该存储结构运行稳定的排序算法，从大到小。
//最后从前往后输出字母。稳定的排序可以选择bubblesort或者直接插入排序，这个存储结构选择数组，但需要将下标对应到各个大写字母。可以利用'A'+数组下标,但是
//在排序的过程中该对应关系会被打破,可以再定义一个数组，用来存下标，和排序同步交换。也可以不排序直接扫描数组，按大的输出，删除后，再扫描



int main(){
    int store[26];
    char chr[MAXNUM];
    int len=0;
    char temp;
    //输入字符串
    printf("请输入一个字符串，以$结尾\n");
    while (1)
    {
        scanf("%c",&temp);
        if(temp!='$'&&len<MAXNUM){
            chr[len++]=temp;
        }else{
            break;
        }
    }
    //扫描统计
    //归0
    for(int i=0;i<26;i++) store[i]=0;
    for(int i=0;i<len;i++){
        if(chr[i]>='A'&&chr[i]<='Z')
            store[chr[i]-'A']++;
    }
    for(int i=0;i<26;i++) printf("%d",store[i]);
    //扫描输出
    for(int j=0;j<26;j++){
        int max=0;
        for(int i=0;i<26;i++){
            if(store[i]>store[max]){
                max=i;
            }
        }
        if(store[max]!=0) printf("%c的个数为：%d\n",max+'A',store[max]);
        store[max]=0;
    }
}