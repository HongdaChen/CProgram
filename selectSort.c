#include <stdio.h>
//7.用冒泡排序法或选择排序法对 20个数据进行排序后输出，并给出现在每个元素所对应的原来的次序。
//根据题意，定义整型数组 a来存储要排序的数值，定义整型数组 pos 来存储该数值的原始位置。
//在冒泡排序时，交换a的同时交换 pos，使 pos 始终与 a同步，这样 pos 中存储的就是每一个输入值的原始位置。

int main(){
    int n[20],pos[20];
    int temp;
    //initial
    for(int i=0;i<20;i++) pos[i]=i;
    printf("输入20个整数\n");
    int i=0;
    while(i<20){
        scanf("%d",&n[i]);
        i++;
    }
    //选择排序,小到大
    for(int j=0;j<20;j++){
        int min=j;
        for(int i=j;i<20;i++){
            if(n[i]<n[min]) min=i;
        }
        if(min!=j){
            temp=n[j];n[j]=n[min];n[min]=temp;
            temp=pos[j];pos[j]=pos[min];pos[min]=temp;
        }
    }
    //print
    printf("after sort(former sequence):\n");
    for(int i=0;i<20;i++){
        printf("%d(%d)->",n[i],pos[i]);
    }

    return 0;
}

