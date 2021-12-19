#include <stdio.h>
/*用归并排序法对一组数据由小到大进行排序，数据分别为 695、458、362、789、12、 15、163、23、2、986。s*/
int merge(int r[],int s[],int x1,int x2,int x3)    //自定义实现一次归并样序的函数
{
    int i,j,k;
    i=x1;    //第一部分的开始位置
    j=x2+1;  //第二部分的开始位置
    k=x1;
    while((i<=x2)&&(j<=x3))    //当i和j都在两个要合并的部分中时
        if(r[i]<=r[j])    //筛选两部分中较小的元素放到数组s中
        {
            s[k] = r[i];
            i++;
            k++;
        }
        else
        {
            s[k]=r[j];
            j++;
            k++;
        }
        while(i<=x2)    //将x1〜x2范围内未比较的数顺次加到数组r中
            s[k++]=r[i++];
        while(j<=x3) //将x2+l〜x3范围内未比较的数顺次加到数组r中
            s[k++]=r[j++];
    return 0;
}

int merge_sort(int r[],int s[],int m,int n)
{
    int p;
    int t[20];
    if(m==n)
        s[m]=r[m];
    else
    {
        p=(m+n)/2;
        merge_sort(r,t,m,p);    //递归调用merge_soit()函数将r[m]〜r[p]归并成有序的t[m]〜t[p]
        merge_sort(r,t,p+1,n);    //递归一调用merge_sort()函数将r[p+1]〜r[n]归并成有序的t[p+1]〜t[n]
        merge(t,s,m,p,n);    //调用函数将前两部分归并到s[m]〜s[n]*/
    }
    return 0;
}

int main()
{
    int a[11];
    int i;
    printf("请输入10个数：\n");
    for(i=1;i<=10;i++)
        scanf("%d",&a[i]);    //从键盘中输入10个数
    merge_sort(a,a,1,10);    //调用merge_sort()函数进行归并排序
    printf("排序后的顺序是：\n");
    for(i=1;i<=10;i++)
        printf("%5d",a[i]);    //输出排序后的数据
    printf("\n");
    return 0;
}