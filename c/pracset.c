#include<stdio.h>

int main(){
int arr[10];
int *ptr=arr;
ptr=ptr+2;
if(ptr==&arr[2]){
    printf("same loaction");
}
 else{
     printf("Not the same loaction");
 }
return 0;
}