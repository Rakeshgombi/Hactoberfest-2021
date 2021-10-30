#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
int number,guess, attempts;
srand(time(0));
number = rand()%100+1;
printf("the number is %d\n",number);

return 0;
}