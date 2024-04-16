//remove duplicates in-place from the sorted array & return the no. of unique elements

#include<bits/stdc++.h>
using namespace std;

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

    int i=0;
    for(int j=1; j<=n-1; j++) // TC : O(N)
    {
        if(arr[j] != arr[i])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }

    cout<<"Number of unique elements are: "<<i+1<<endl;

    cout<<"New array: ";
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}