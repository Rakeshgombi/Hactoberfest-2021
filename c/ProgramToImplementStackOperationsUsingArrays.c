#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
int top;
int s[SIZE];
void push(int item)
{
if (top==SIZE-1)
{
printf("Stack is Full\n");
return;
}
top++;
s[top]=item;
}
void pop()
{
int item;
if (top==-1)
{
printf("Stack is Empty\n");
return;
}
item=s[top];
printf("The deleted item=%d\n",item);
top--;
}
void display()
{
int i;
if(top==-1)
{
printf("Stack is Empty\n");
return;
}
printf("The Contents of Stack are\n");
for(i=top;i>=0;i--)
printf("%d\n",s[i]);
}
void main()
{
int item,choice;
top=-1;
clrscr();
while(1)
{
printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
printf("Enter your choice\n");
scanf("%d",&choice);
switch (choice)
{
case 1:printf("Enter the item to insert\n");
scanf("%d",&item);
push(item);
break;
case 2:pop();
break;
case 3:display();
break;
default:exit(0);
}
}
getch();
}
