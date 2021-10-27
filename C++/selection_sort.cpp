/* SELECTION SORT */

/* Find the minimum elementin unsorted array and swap it with element at beginning */

#include <iostream>
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

    for (int i = 0; i < n-1; i++)
    {
        for(int j = (i+1); j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Elements of array after sorting are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
