#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* next;
};
typedef struct node* NODE;
NODE insertfront(NODE first, int x)
{
NODE temp=(NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("OUT OF MEMORY\n");
getch();
exit(0);
}
temp->info=x;
temp->next=first;
first=temp;
return first;
}
NODE deletefront(NODE first)
{
NODE p;
if(first==NULL)
{
printf("LIST IS EMPTY\n");
getch();
exit (0);
}
p=first;
first=first->next;
printf("THE DELETED item=%d\n",p->info);
free(p);
return first;
}
void search(NODE first,int x)
{
NODE p;
if(first==NULL)
{
printf("LIST IS EMPTY\n");
getch();
exit (0);
}
for(p=first;p!=NULL;p=p->next)
{
if(x==p->info)
{
printf("ITEM %d FOUND IN THE LIST\n",x);
return;
}
}
printf("ITEM %d NOT FOUND IN THE LIST\n",x);
}
void display(NODE first)
{
NODE p;
if(first==NULL)
{
printf("LIST IS EMPTY\n");
}
printf("THE CONTENTS OF LIST ARE\n");
for(p=first;p!=NULL;p=p->next)
{
printf("%d\t",p->info);
}
}
void main()
{
NODE first=NULL;
int x,choice;
clrscr();
while(1)
{
printf("\n1.INSERT FRONT\n2.DELETE FRONT\n3.SEARCH\n4.DISPLAY\5.EXIT\n");
printf("ENTER YOUR CHOICE\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("ENTER THE ITEM\n");
scanf("%d",&x);
first=insertfront(first,x);
break;
case 2:first=deletefront(first);
break;
case 3:printf("ENTER THE ITEM TO BE SEARCHED\n");
scanf("%d",&x);
search(first,x);
break;
case 4:display(first);
break;
default:exit(0);
}
}
}
