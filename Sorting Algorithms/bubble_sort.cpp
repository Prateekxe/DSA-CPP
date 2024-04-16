#include<bits/stdc++.h>
using namespace std;

//push max. element to the last by adjacent swaps

// TC --> O(n) : Best
// TC --> O(n^2) : Average, Worst

void bubble(int arr[], int n)
{
 for(int i=n-1; i>=1; i--)
 {
    int did_swap = 0; // this will check if swap condition is satisfied or not
    for(int j=0; j<= i-1; j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(arr[j], arr[j+1]);
            did_swap++;
        }
    }
    if(did_swap==0) break; // if swap condition is not satisfied even once -> it means array is already sorted and that's why program breaks out from here
 }
}


void bubble2(int arr[], int n)
{
 for(int i=0; i<=n-2; i++)
 {
    int did_swap = 0; // this will check if swap condition is satisfied or not
    for(int j=0; j<=n-i-2; j++)
    {
        if(arr[j] > arr[j+1])
        {
            swap(arr[j], arr[j+1]);
            did_swap++;
        }
    }
    if(did_swap==0) break; // if swap condition is not satisfied even once -> it means array is already sorted and that's why program breaks out from here
 }
}

int main()
{
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }

    bubble2(arr,n);
    cout<<endl;

    cout<<"sorted Array: "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}
