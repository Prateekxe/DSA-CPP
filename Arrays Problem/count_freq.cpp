//count frequency of any element of an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    //pre-compute
    unordered_map <int,int> mpp;
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]] ++;
    }

    cout<<"Enter the number of queries to get the freq: ";
    int q;
    cin>>q;

    while(q--)
    {
        int num;
        cout<<"Enter the number: ";
        cin>>num;
        
        cout<<"Frequency: "<<mpp[num]<<endl;
    }

    return 0;

}