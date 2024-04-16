#include<bits/stdc++.h>
using namespace std;

int partition(vector <int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j)
    {
        while(arr[i] <= pivot && i <= high-1)
        {
            i++;
        }

        while(arr[j] > pivot && j >= low+1)
        {
            j--;
        }

        if(i<j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void qs(vector <int> &arr, int low, int high)
{
    if(low<high)
    {
        int p_indx = partition(arr, low, high);

        qs(arr, low, p_indx-1);
        qs(arr, p_indx+1, high);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector <int> arr;

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        int value;
        cin>>value;
        arr.push_back(value);
    }
    cout<<endl;

    qs(arr,0,n-1);

    cout<<"Elements of the sorted array are: "<<endl;
    for(int i=0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}