// Find the second largest element in the array

#include<bits/stdc++.h>
using namespace std;

//Brute Force approach will be : Sort the array and the second last element will be your second largest element (if the array doesn't contains duplicates)
// if ( array contains duplicate elements ) --> u can apply below code

// for(int i = n-2; i>=0; i--)
// {
//     if(arr[i] != largest)
//     {
//         s_largest = arr[i];
//         break;
//     }
// }

//but --> TC : N + NlogN

int largest(int arr[], int n)
{
    //TC : O(N)
    int largest = arr[0];
    for(int i=1; i<=n-1; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }
    return largest;
}

int slargest(int arr[], int n, int l_elt)
{
    // TC: O(N)
    int slargest_elt = INT_MIN;
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i] > slargest_elt && arr[i] != l_elt)
        {
            slargest_elt = arr[i];
        }
    }
    return slargest_elt;
}

int main()
{
    //TC : O(N) approach
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }

    int largest_elt = largest(arr,n); // O(N)
    int slargest_elt = slargest(arr, n, largest_elt); // O(N)
    //Total TC = O(2N) --> O(N)

    cout<<"Largest element is: "<<largest_elt<<endl;
    cout<<"Second Largest element is: "<<slargest_elt<<endl;

}

