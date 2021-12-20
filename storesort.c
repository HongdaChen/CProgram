#include <stdio.h>
#define MAXNUM 10
//2.将一组数据存放在一维数组中，并将它们排好序。 从键盘输入一个数，要求按原来的顺序将它插入到数组合适的位置上。

void BubbleSort(int length,int array[MAXNUM]){
    //从小到大
    int flag=0;
    int temp;
    for(int j=length-1;j>0;j--){
        for(int i=0;i<j;i++){
            if(array[i]>array[i+1]) {
                flag=1;
                temp = array[i];array[i]=array[i+1];array[i+1]=temp;
            }
        }
        if(flag==0) break;
    }
}

int main(){
    int myarray[MAXNUM];
    int length=0;//实际数组长度
    int temp;//暂存输入的数据
    while(1){
        printf("请输入一个整数[输入-1退出数据录入功能]：\n");
        scanf("%d",&temp);
        if(temp==-1){
            break;
        }else if(length==MAXNUM){
            printf("数组已满\n");
            break;
        }
        myarray[length++]=temp;
    }

    //打印数组
    printf("排序前\n");
    for(int i=0;i<length;i++){
        printf("%d\t",myarray[i]);
    }
    printf("\n");

    //bubbleSort
    BubbleSort(length,myarray);

    //打印数组
    printf("排序后\n");
    for(int i=0;i<length;i++){
        printf("%d\t",myarray[i]);
    }
    printf("\n");

    //插入
    printf("请输入一个整数\n");
    scanf("%d",&temp);
    if(length==MAXNUM) {
        printf("数组已经满了\n");
        return -1;
    }
    int j=length-1;
    while (temp<myarray[j]&&j>=0)
    {
        myarray[j+1]=myarray[j];
        j--;
    }
    myarray[j+1]=temp;
    length++;

    //打印数组
    for(int i=0;i<length;i++){
        printf("%d\t",myarray[i]);
    }
    printf("\n");
    
    
    return 0;

}

