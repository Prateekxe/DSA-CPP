//Find the Largest element of the array

#include<bits/stdc++.h>
using namespace std;

//Brute Force approach can be --> first you sort the array & then you will return the last element from the sorted array --> TC : O(NlogN)

// TC of this solution is: O(N)
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

    int largest = arr[0];
    for(int i=1; i<=n-1; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }

    cout<<"The largest element of the array is: "<<largest;

    
}