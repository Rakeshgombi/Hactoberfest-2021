#include<stdio.h>
void printarray(int n){
for(int i=0;i<n;i++)
{
    printf("the value at element %d is %d",i+1, *(ptr+i));
}
}

int main(){
int arr[]={1,2,3,4,5,4};


printarray(arr,6);

return 0;
}