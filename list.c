#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
Node * initLink(){
    Node * p=(Node*)malloc(sizeof(Node));
    Node * temp=p;
    char c[30];
    printf("请输入用户名:");
    gets(c[30]);
    Node *a=(Node*)malloc(sizeof(Node));
    strcpy(a->data.name,c);
    a->PNext=NULL;
    temp->PNext=a;
    temp=temp->PNext;
    return p;
}
Node * insertElem(Node * p, char s[30], int add) 
{
    Node * temp = p;
    for (int i = 1; i < add; i++) {
        temp = temp->PNext;
        if (temp == NULL) {
            printf("插入位置无效\n");
            return p;
        }
    }
    Node * c = (Node*)malloc(sizeof(Node));
    strcpy(c->data.name,s[30]);
    c->PNext = temp->PNext;
    temp->PNext = c;
    return p;
}
Node * delElem(Node * p,char c[30]) {
     Node* temp = p;
     int i=1;
     while(i!=0)
    {
        i=strcmp(c[30],temp->data.name);
    }
    temp->PNext = temp->PNext->PNext;
    return p;
}
void print(Node*head) 
{   Node*p;
    p=head;
    while(p!=NULL) 
    {
     printf("%s",p->data.name) ;   
    p=p->PNext; 
    } 
}

void destroy_list(PNode head)
{
	PNode prev = NULL;
 
	while (NULL != head)
	{
		prev = head;
		head = head->PNext;
		free(prev);
		prev = NULL;
	}
}


