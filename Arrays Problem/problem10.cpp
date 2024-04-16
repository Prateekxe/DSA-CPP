// Move all 0's to the end of the array


#include<bits/stdc++.h>
using namespace std;

void move_zero_optimal(int arr[], int n)
{
    //optimal

    //step1
    int j=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }

    if(j==-1) return;

    //step 2
    for(int i=j+1; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void move_zero(int arr[], int n)
{

    //brute force approach
    vector <int> temp;

    //step1
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            //temp[j] = arr[i];
            temp.push_back(arr[i]);
            j++;
        }
    }

    //step 2
    for(int i=0; i<temp.size(); i++)
    {
        arr[i] = temp[i];
    }

    //step 3
    int nz = temp.size();
    for(int i= nz; i<n; i++)
    {
        arr[i] = 0;
    }
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

    //move_zero_optimal(arr,n);
    move_zero(arr,n);

    cout<<"New array: ";
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}