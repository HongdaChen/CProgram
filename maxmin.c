#include <stdio.h>
//有3个数据a，b，c，它们由键盘输入，编写程序将它们按从小到大排序。

int main(){
   int a,b,c;
   printf("请输入a,b,c的值【以空格为分隔符】：");
   scanf("%d %d %d",&a,&b,&c);
   if(a<=b&&a<=c){
	if(b>=c){
	   printf("3个数由小到大：%d < %d < %d\n",a,c,b);
	}else{
           printf("3个数由小到大：%d<%d<%d\n",a,b,c);
	}
	}
   else if(b<=a&&b<=c){
	if(a<=c){
	  printf("3个数由小到大：%d<%d<%d\n",b,a,c); 
	}else{
	  printf("3个数由小到大：%d<%d<%d\n",b,c,a);
	}
	}
   else{
	if(a<=b){
	  printf("3个数由小到大：%d<%d<%d\n",c,a,b);
	}else{
	  printf("3个数由小到大：%d<%d<%d\n",c,b,a);
	}
   }
   return 0;
}
