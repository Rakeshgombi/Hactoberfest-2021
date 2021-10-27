#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char filename[20];
int count=0;
clrscr();
printf("Enter filename\n");
scanf("%s",filename);
fp=fopen(filename,"r");
if(fp==NULL)
{
printf("File doesn't exit\n");
exit(0);
getch();
}
while((getc(fp))!=EOF)
{
count++;
}
fclose(fp);
printf("Number of character in a file is %d",count);
getch(); 
}
