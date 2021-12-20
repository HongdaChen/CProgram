#include <stdio.h>
#include <stdlib.h>
#define ElemType int
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

//头插法建立单链表
LinkList HeadFirstInsert(LinkList L){
	printf("建立单链表\n");
	fflush(stdout);
	L = (LinkList)malloc(sizeof(LNode));
	L->next=NULL;//head
	LNode *s;
	ElemType x;
	printf("input an itom:\n");
	fflush(stdout);
	scanf("%d",&x);////////////////////////////不有动态性
	while(x!=999){
		s=(LNode*)malloc(sizeof(LNode));	
		s->data=x;
		s->next=L->next;
		L->next=s;
		scanf("%d",&x);////////////////////////////不有动态性

	}
	return L;

}

//尾插法
LinkList TailFirstInsert(LinkList L){
	ElemType x;
	LNode *s,*r;
	printf("tailInsert to create a single link list\n");
	fflush(stdout);
	L=(LinkList)malloc(sizeof(LNode));
	L->next=NULL;
	r=L;
	printf("input an itom,or 999 exit\n");
	fflush(stdout);
	scanf("%d",&x);
	while(x!=999){
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
		r->next=s;
		r=s;
		scanf("%d",&x);
	}
	r->next=NULL;
	return L;

}
//2015真题西交
int caortx(LinkList L,int x){
	LNode *temp=L->next;
	int k=0;
	while(temp!=NULL){
		if(temp->data==x){
			k++;
		}	
		temp=temp->next;
	}
	
	return k;
}
int main(){

	LinkList list=NULL;
//	LinkList L = HeadFirstInsert(list);
	LinkList L = TailFirstInsert(list);
	LNode *temp=L->next;
	while(temp!=NULL){
		printf("->%d",temp->data);
		fflush(stdout);
		temp=temp->next;
	}
	printf("\n");
	fflush(stdout);
	int n=caortx(L,7);//count the number of 7 in L
	printf("7的数量为%d\n",n);

	return 0;
}
