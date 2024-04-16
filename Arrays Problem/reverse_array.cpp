// REVERSE AN ARRAY

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int p, int q)
{
   while(p<=q)
    {
        // int temp = arr[p];
        // arr[p] = arr[q];
        // arr[q] = temp;
        swap(arr[p], arr[q]);
        p++;
        q--;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }

    int start = 0;
    int end = n-1;

    reverse(arr, start, end);

    cout<<"New array: ";
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}