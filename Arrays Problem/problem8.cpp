// RIGHT ROTATE ARRAY BY d PLACE 

#include<bits/stdc++.h>
using namespace std;

void rotate_right(int arr[], int n, int d)
{
    //brute force approach
    int temp[d];
    
    for(int i=n-d; i<=n-1; i++)  // storing from arr --> temp 
    {
        temp[i-(n-d)] = arr[i];
    }
    
    for(int i=0; i<=d; i++) // shifting
    {
        arr[(n-d)+1] = arr[i];
    }
    
    for(int i=0; i<=d-1; i++) // storing back from temp --> arr
    {
        arr[i] = temp[i];
    }
}

void rotate_left_optimal(int arr[], int n, int d)
{
    //optimal approach
    // tc: O(2n), sc:O(1)
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
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

    int d;
    cout<<"Enter the value of D: ";
    cin>>d;
    d = d%n;
    
    //rotate_left(arr,n,d);
    //rotate_left_optimal(arr,n,d);
    rotate_right(arr,n,d);

    cout<<"New array: ";
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}