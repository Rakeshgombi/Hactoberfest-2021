#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(int argc,char *argv[])
{
FILE *fs,*fd;
char ch;
clrscr();
if(argc!=3)
{
printf("Insufficient arguments\n");
exit(0);
}
fs=fopen(argv[1],"r");
if(fs==NULL)
{
printf("Cannot open a source file\n");
exit(0);
}
fd=fopen(argv[2],"w");
if(fd==NULL)
{
printf("Cannot open a destination file\n");
exit(0);
}
while((ch=fgetc(fs))!=EOF)
{
fputc(ch,fd);
}
printf("File copied successfuly");
fclose(fs);
fclose(fd);
getch();
}
