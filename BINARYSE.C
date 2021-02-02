#include<stdio.h>
#include<conio.h>
struct btnode
{
int value;
struct btnode *l;
struct btnode *r;
} *root = NULL, *temp=NULL, *t2, *t1;
void delete1();
void insert();
void delete();
void inorder(struct btnode *t);
void create();
void search(struct btnode *t);
void preorder(struct btnode *t);
void postorder(struct btnode *t);
void search1(struct btnode *tint data);
int smallest(struct btnode *t);
int largest(struct btnode *t);
int flag=1;
void main()
{
int ch;
printf("\nOPERATION");
printf("\n1.insert\n");
printf("\n2.delete\n");
printf("\n3.inorder traversal\n");
printf("\n4.preorder traversal\n");
printf("\n5.postorder traversal\n");
printf("\n6.exit\n");
while(1)
{
printf("\n enter your choice");
scanf("%d,&ch);
switch(ch)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:inorder(root);
break;
case 4:preorder(root);
break;
case 5:postorder(root);
break;
case 6:exit(0);
default:printf("wrong choice,please enter correct choice");
break;
}
}
}
void insert()
{
create();
if(root=NULL)
root=temp;
else
search(root);
}
void create()
{
int data;
printf("enter data to be inserted");
scanf("%d",&data);
temp=(struct btnode*)malloc(l*sizeof(struct btnode));
temp->value=data;
tem->l=temp->r=NULL;
}
void search(struct btnode *t)
{
if((temp->value>t->value)&&(t->r!=NULL))
search(t->r);
else if((temp->value>t->value)&&(t->r==NULL))
t->r=temp;
else if((temp->value<t->value)&&(t->l!=NULL))
search(t->l);
else if((temp->value<t->value)&&(t->l==NULL))
t->l=temp;
}
void inorder(struct btnode *t)
{
if(root==NULL)
{
printf("no elements in a tree to display");
return;







