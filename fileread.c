#include<stdio.h>
#include<stdlib.h>
#define LENGTH 30
typedef struct User_login{
char name[LENGTH]; //用户名
int totalcount; //登录次数
}SDataType; //链表的节点
typedef struct SListNode
{
SDataType data;
struct SListNode* PNext;
}Node,*PNode; //封装链表节点和 next 指针
int fileread();
int fileread()
{
    int n,i;
    Node *p;
    Node *q;
    p=(Node*)malloc(sizeof(Node));
    p->PNext=q;
    scanf("%d",n);
    for ( i = 0; i < n; i++)
    {
        char name[30];
        FILE *fp=fopen("user_login.txt","r");
        fscanf(fp,"%s",q->data.name);
        p->data.totalcount=1;
        fclose(fp); 
        q=q->PNext;
        p=q;
        
    }

}