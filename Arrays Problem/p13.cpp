// print the maximum no. of consecutive 1's

#include<bits/stdc++.h>
using namespace std;

int findmaxone(int arr[], int n)
{
    int sum =0; 
    int max =0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            sum += 1;
        }

        else
        {
            sum = 0;
        }

        if(sum >= max)
        {
            max = sum;
        }
    }

    return max;
    
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

    int ans = findmaxone(arr, n);

    cout<<"max. no. of 1's are: "<< ans;

}