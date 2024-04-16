#include<bits/stdc++.h>
using namespace std;

// Select the minimum & swap

// TC --> O(n^2) : Best, Average, Worst

void selection(int arr[], int n)
{
  for(int i=0; i<=n-2; i++)
  {
    int min = i; // assuming first index of every iteration as minimum
    
    for(int j=i+1; j<=n-1; j++) // iterating from next element of i/min to last element 
    {
        if(arr[j] < arr[min]) // checking if that element is smaller than assumed minimum
            min = j; // if the number is smaller than assumed minimum, put that smaller index in assumed min index
    }
    swap(arr[i], arr[min]); // swapping assumed(old) min value with new min value
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

    selection(arr,n);
    cout<<endl;

    cout<<"sorted Array: "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}