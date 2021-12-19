#include <stdio.h>

struct index    //定义块的结构
{
    int key;    //块的关键字
    int start;    //块的起始值
    int end;    //块的结束值
}index_table[4];    //定义结构体数组

//例如，采用分块查找法在有序表 11、12、18、28、39、56、69、89、96、122、135、146、156、256、298 中查找关键字为 96 的元素。
// 査找特定关键字元素个数为 15，要求用户输入有序表各元素，程序输出査找成功与否，若成功，显示元素在有序表中的位罝。

int block_search(int key,int a[])    //自定义实现分块查找
{
    int i,j;
    i=1;
    while(i<=3&&key>index_table[i].key)    //确定在哪个块中
        i++;
    if(i>3)    //大于分得的块数，则返回0
        return 0;
    j=index_table[i].start;    //j等于块范围的起始值
    while(j<=index_table[i].end&&a[j]!=key)    //在确定的块内进行顺序查找
        j++;
    if(j>index_table[i].end)    //如果大于块范围的结束值，则说明没有要査找的数，j置0
        j = 0;
    return j;
}

int main()
{
    int i,j=0,k,key,a[16];
    printf("请输入15个数：\n");
    for(i=1;i<16;i++)
        scanf("%d",&a[i]);    //输入由小到大的15个数
    for(i=1;i<=3;i++)
    {
        index_table[i].start=j+1;    //确定每个块范围的起始值
        j=j+1;
        index_table[i].end=j+4;    //确定每个块范围的结束值
        j=j + 4;
        index_table[i].key=a[j];    //确定每个块范围中元素的最大值
    }
    printf("请输入你想査找的元素：\n");
    scanf("%d",&key);    //输入要查询的数值
    k=block_search(key,a);    //调用函数进行杳找
    if(k!=0)
        printf("查找成功，其位置是：%d\n",k);    //如果找到该数，则输出其位置
    else
        printf("查找失败!");    //若未找到，则输出提示信息
    return 0;
}