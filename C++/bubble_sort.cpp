/* BUBBLE SORT */

/* Repeatedly swap two adjacent elements if they are in wrong order */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : " << endl;
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    for(int i =0; i<n-1; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            if(arr[j+1]>arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return 0;
}
