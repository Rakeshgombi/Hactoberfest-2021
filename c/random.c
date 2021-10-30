#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
int number,guess,attempts=1;
srand(time(0));
number = rand()%100+1;
printf("the number is %d\n",number);

do{
    printf("GUESS THE NUMBER\n");
scanf("%d", &guess);
    if(guess>number){
        printf("A little lesser\n");
        }
    else if(guess<number){
        printf("A little greater\n");
        
    }
    else{
       printf("you guessed it right in %d attempts\n", attempts);
    }
    attempts++;
}while(guess!=number);
return 0;
}