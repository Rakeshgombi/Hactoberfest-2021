#include <stdio.h>
#include <conio.h>
#define SIZE 50
int s[SIZE];
int top=-1;
void push(int item)
{
s[++top]=item;
}
int pop()
{
return(s[top--]);
}
void main()
{
char postfix[50],ch;
int i=0,op1,op2;
clrscr();
printf("Enter the Postfix Expression\n");
scanf("%s",postfix);
while((ch=postfix[i++]) != '\0')
{
if(isdigit(ch))
push(ch-'0');
else
{
op2=pop();
op1=pop();
switch(ch)
{
case '+':push(op1+op2);
break;
case '-':push(op1-op2);
break;
case '*':push(op1*op2);
break;
case '/':push(op1/op2);
break;
}
}
}
printf("Given Postfix Expression: %s\n",postfix);
printf("Result after Evaluation: %d\n",s[top]);
getch();
}
