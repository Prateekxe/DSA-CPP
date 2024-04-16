//Check if the given array is sorted or not

#include<bits/stdc++.h>
using namespace std;

bool check_sorted(int arr[], int n)
{
    for(int i=0; i<=n-2; i++)
    {
        if(arr[i] <= arr[i+1])
        {
            
        }
        else
        {
            return false;
        }
    }
    return true;
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

    if(check_sorted(arr,n))
    {
        cout << "The array is sorted."<<endl;
    }
    else
    {
        cout<<"Array is not sorted."<<endl;
    }
}