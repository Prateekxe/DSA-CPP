// find missing number

#include<bits/stdc++.h>
using namespace std;

int brute(int arr[], int n)
{
    for(int mnum = 1; mnum<=n; mnum++)
    {
        int flag =0;
        for(int j=0; j<=n-2; j++)
        {
            if(mnum == arr[j])
            {
                flag =1;
                break;
            }
        }
        if(flag == 0)
        {
            return mnum;
            break;
        }
    }
}

// better - use hashing
void better(int arr[], int n)
{
    int hash[n+1] = {0};

    for(int i=0; i<=n-2; i++)
    {
        hash[arr[i]] = 1;
    }

    for(int i=1; i<=n; i++)
    {
        if(hash[i] == 0)
        {
            cout<<"missing no. is: "<<i;
            break;
        }
    }
}

void optimal(int arr[], int n)
{
    int arr_sum =0;
    int sum = n*(n+1)/2;
    for (int i = 0; i <= n-2; i++)
    {
        arr_sum += arr[i];
    }

    cout<<"missing no. is: "<<  sum - arr_sum;
    
}

int optimal2(int arr[], int n)
{
    int xor_arr =0, xor_num=0;

    for(int i=0; i<=n-2; i++)
    {
        xor_arr = xor_arr ^ arr[i];
    }

    for(int i=1; i<=n; i++)
    {
        xor_num = xor_num ^ i;
    }

    //cout<< " Missing number is: "<< xor_arr ^ xor_num;
    return xor_arr ^ xor_num;
}


int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array from 1 to "<<n<<" with 1 number missing: ";
    for(int i=0; i<=n-2; i++)
    {
        cin>>arr[i];
    }

    // int num = brute(arr,n);
    // cout<<"Missing number from 1 to "<<n<<" is: "<<num;

    //better(arr,n);

    int num = optimal2(arr,n);
    cout<<"Missing number from 1 to "<<n<<" is: "<<num;
}