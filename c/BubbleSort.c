#include<stdio.h>

void swap(int *xp, int *yp)
{
	int temp= *xp;
	*xp = *yp;
	*yp = temp;
}
/*
//function for bubble sort.
void bubblesort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			swap(&a[j],&a[j+1]);
		}
	}
}*/
//function for Selection Sort
void selectionsort(int a[],int n)
{
	int i, j, mid_idx;
	for(i=0;i<n;i++)
	{
		mid_idx = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[mid_idx]){
				mid_idx=j;
				
			}
			swap(&a[mid_idx],&a[i]);
		}
	}
}

void printArray(int a[],int n){
	int i,j;
	printf("Sorted Array: \n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] = %d \n",i,a[i]);
		
	}
}
int main(){
	int a[]={45,67,28,46,78,24,26,78,91,97,791,387,98,};
	int n = sizeof(a)/sizeof(a[0]);
	//bubblesort(a,n);
	selectionsort(a,n);
	printArray(a,n);
	return 0;
}





















