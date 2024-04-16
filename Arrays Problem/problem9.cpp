// Linear Search

#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int num)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
           return i; 
        }
    }
    return -1;
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

    int num;
    cout<<"Enter the number to find its index: ";
    cin>>num;

    
    int ans = linear_search(arr, n,num);

    if(ans==-1)
    {
        cout<<"Your number is not in the given array"<<endl;
    }
    else cout<<"Your number is at index "<<ans;

}