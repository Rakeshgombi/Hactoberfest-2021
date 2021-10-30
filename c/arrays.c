/*array is an collection of similar elements 
basically a single variable capable of holding multiple 
values 

--starts with 0;
--contigous memory allocation
*/   

// initialization and declaration at once

// #include<stdio.h>

// int main(){

// int num[]={11,33,66};
// printf("the values are %d\n",num[0]);
// printf("the values are %d\n",num[1]);
// printf("the values are %d\n",num[2]);
// return 0;


// }

//pointer arithmetic
#include<stdio.h>

int main(){
int i=74;
int *ptr=&i;
printf("the address of i ids %d",ptr);
ptr++;
printf("the address of next mlocation of i is %d",ptr);



return 0;
}















