#include <stdio.h>
//17.编写程序，打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数本身。

int main(){
    int g,s,b; //个十百位
    for(int i=100;i<=999;i++){
        g=i%10;
        s=(i/10)%10;
        b=i/100;
        if(i==g*g*g+s*s*s+b*b*b){
            printf("%d\n",i);
        }
    }
    return 0;
}