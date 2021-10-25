/* C++ program to remove duplicate elements in an array */
#include<iostream>
using namespace std;

int remove_duplicate_elements(int arr[], int n)
{

if (n==0 || n==1)
return n;

int temp[n];

int j = 0;
int i;
for (i=0; i<n-1; i++)
if (arr[i] != arr[i+1])
temp[j++] = arr[i];
temp[j++] = arr[n-1];

for (i=0; i<j; i++)
arr[i] = temp[i];

return j;
}


int main()
{
int n;
cin >> n;
int arr[n];
int i;
for(i = 0; i < n; i++)
{
cin >> arr[i];
}

n = remove_duplicate_elements(arr, n);


for (i=0; i<n; i++)
cout << arr[i] << ” “;

return 0;
}
