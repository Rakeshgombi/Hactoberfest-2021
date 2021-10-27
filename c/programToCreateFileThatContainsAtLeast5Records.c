#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct book
{
int number;
char name[20];
char author[20];
char publisher[20];
int price;
};

void main()
{
struct book b[5];
FILE *fp;
int i;
clrscr();
printf("Enter Five Records\n");
printf("BOOKNAME\t BOOKNUMBER\t AUTHOR\t PUBLISHER\t PRICE\n");
fp=fopen("Book.txt","w");
if(fp==NULL)
{
printf("Cannot open a file\n");
exit(0);
getch();
}
for(i=0;i<5;i++)
{
scanf("%s%d%s%s%d",b[i].name,&b[i].number,b[i].author,b[i].publisher,&b[i].price);
fprintf(fp,"%s\t%d\t%s\t%s\t%d\n",b[i].name,b[i].number,b[i].author,b[i].publisher,b[i].price);
}
printf("Book.txt file is created....Open the file to see the contents\n");
fclose(fp);
getch();
}
