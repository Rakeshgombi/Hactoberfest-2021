#include<stdio.h>
int BS(int a[], int l, int h, int key)
{
    if(h<l)
        return -1;
    int mid=(l+h)/2;
    if(key==a[mid])
        return mid;
    if(key>a[mid])
        return BS(a, (mid+1), h, key);
    return BS(a, l, (mid-1), key);
}
int findPivot(int a[], int l, int h){
    if(h<l)
        return -1;
    if(h==l)
        return l;

    int mid=(l+h)/2;
    if(mid<h && a[mid]>a[mid+1])
        return mid;
    if(mid>l && a[mid]<a[mid-1])
        return mid-1;
    if(a[l]>=a[mid])
        return findPivot(a, l, mid-1);
    return findPivot(a, mid+1, h);
}
int pivotBS(int a[], int n, int key){
    int pivot=findPivot(a, 0, n-1);
    if(pivot==-1)
        return BS(a, 0, n-1, key);
    if(a[pivot]==key)
        return pivot;
    if(a[0]<=key)
        return BS(a, 0, pivot-1, key);
    return BS(a, pivot+1, n-1, key);
}
int main(){
    int a[20], n, i, j, k, temp, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("\nEnter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("\nNo. of rotations: ");
    scanf("%d", &k);
    for(j=0; j<k; j++){
        temp=a[n-1];
        for(i=n-1; i>=0; i--){
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    printf("Rotated Array: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n\nEnter key to find: ");
    scanf("%d", &key);
    int index=pivotBS(a, n, key);
    printf("\nElement found at index: %d\n\n", index);
}
