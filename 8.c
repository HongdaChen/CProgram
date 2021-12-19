#include <stdio.h>
/*用快速排序法对一组数据由小到大进行排序，数据分别为 99、45、12、36、69、22、62、 796、4、696。*/
int qusort(int s[],int start,int end)    //自定义函数 qusort()
{
    int i,j;
    i=start;
    j=end;
    s[0]=s[start];//设置基准值,s[0]为固定的哨兵位置，所有的分支都用这一个。
    while(i<j){
        while(i<j&&(s[0]<s[j])){
            j--;
        }
        if(i<j){
            s[i]=s[j];
            i++;
        }
        while(i<j&&(s[0]>s[i])){
            i++;
        }
        if(i<j){
            s[j]=s[i];
            j--;
        }
    }
    s[i]=s[0];//将基准值放入指定位置
    if(start<i){
        qusort(s,start,i-1);
    }
    if(end>i){
        qusort(s,i+1,end);
    }
    
    return 0;
}

int main()
{
    int a[11], i;    //定义数组及变量为基本整型
    printf("请输入10个数：\n");
    for(i=1;i<=10;i++)
        scanf("%d",&a[i]);    //从键盘中输入10个要进行排序的数

    qusort(a,1,10);    //调用qusort()函数进行排序
    printf("排序后的顺序是：\n");
    for(i=1;i<=10;i++)
        printf("%5d",a[i]);    //输出排好序的数组
    printf("\n");
    return 0;
}