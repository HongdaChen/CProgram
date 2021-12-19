#include <stdio.h>
// 中国古代数学家张丘建在他的《算经》中提出了一个著名的“百钱买百鸡问题”，鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问翁、母、雏各几何？
int main()
{
    int cock,hen,chick;   /*定义变童为基本整型*/

    for(cock=0;cock<=20;cock++)   /*公鸡范围在 0~20 之间*/

    for(hen=0;hen<=33;hen++)   /*母鸡范围在 0~33 之间*/

    for(chick=3;chick<=99;chick++)   /*小鸡范围在 3~99 之间*/

    if(5*cock+3*hen+chick/3==100)   /*判断钱数是否等于 100*/

    if(cock+hen+chick==100)   /*判断购买的鸡数是否等于 100*/

    if(chick%3==0)   /*判断小鸡数是否能被 3 整除*/

    printf("公鸡：%d，母鸡：%d，小鸡：%d\n",cock,hen,chick);

    return 0;
}