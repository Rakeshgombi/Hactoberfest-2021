#include<stdio.h>

int main(){
int mul[10],i,n;
printf("enter the number of the tables to be displayed\n");
scanf("%d",&n);
if(n>=65 && n<=90){
    printf("invalid");
}
for(i=0;i<10;i++){
    mul[i]=n*(i+1);
}

for(i=0;i<10;i++){
  printf("%dX%d=%d\n",n,i+1,mul[i]);
}
return 0;
}