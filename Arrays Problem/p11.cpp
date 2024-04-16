//UNION OF TWO SORTED ARRAY

#include<bits/stdc++.h>
using namespace std;

vector <int> sortedArray(int a[], int b[],int n1, int n2)
{
    // Write your code here
    // int n1 = a.size();
    // int n2 = b.size();

    set <int> st;

    for(int i=0; i<n1; i++)
    {
        st.insert(a[i]);
    }

    for(int i=0; i<n2; i++)
    {
        st.insert(b[i]);
    }

    vector <int> temp;

    for(auto it: st)
    {
        temp.push_back(it);
    }

    return temp;
}

int main()
{
    int n1;
    cout<<"Enter the size of the array 1: ";
    cin>>n1;
    int arr1[n1];

    cout<<"Enter the elements of the array 1: ";
    for(int i=0; i<=n1-1; i++)
    {
        cin>>arr1[i];
    }

    int n2;
    cout<<"Enter the size of the array 2: ";
    cin>>n2;
    int arr2[n2];

    cout<<"Enter the elements of the array 2: ";
    for(int i=0; i<=n2-1; i++)
    {
        cin>>arr2[i];
    }


    //move_zero_optimal(arr,n);
    //move_zero(arr,n);
    vector <int> temp = sortedArray(arr1,arr2,n1,n2);

    cout<<"New array: ";
    for(int i=0; i< temp.size(); i++)
    {
        cout<< temp[i] << " ";
    }
}