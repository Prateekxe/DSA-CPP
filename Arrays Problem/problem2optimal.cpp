// Find the second largest element in the array

#include<bits/stdc++.h>
using namespace std;

// This is 2 pointer approach to this problem
//in order to find second largest element -> u will eventually find the largest element in the process

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


    int largest_elt = arr[0];
    int slargest_elt = INT_MIN;// INT_MIN : in case there are negative numbers in the array, else you can intialize with -1

    for(int i=0; i<=n-1; i++)
    {
        if(arr[i] > largest_elt)
        {
            slargest_elt = largest_elt;
            largest_elt = arr[i];
        }
        else if(arr[i] < largest_elt && arr[i] > slargest_elt)
        {
            slargest_elt = arr[i];
        }
    }

    cout<<"Largest element is: "<<largest_elt<<endl;
    cout<<"Second Largest element is: "<<slargest_elt<<endl;
}