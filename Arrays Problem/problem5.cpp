// LEFT ROTATE ARRAY BY 1 PLACE 

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

    //optimal approach by making change in the array itself
    int temp = arr[0];

    for(int i=1; i<=n-1; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    

    cout<<"New array: ";
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }

}

    // BRUTE FORCE METHOD , taking 2 arrays
    // int arr2[n];                       //creating a new array
    // arr2[n-1] = arr[0];                // putting 0th index of old array into last index of new array
    // for(int i=0; i<=n-2; i++)          // copying the elements of old array into new array
    // {
    //     arr2[i] = arr[i+1];
    // }