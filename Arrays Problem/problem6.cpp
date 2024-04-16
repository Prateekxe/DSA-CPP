// RIGHT ROTATE ARRAY BY 1 PLACE 

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

    int temp = arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;

    cout<<"New array: ";
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}