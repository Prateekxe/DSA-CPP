// Problem statement
// You are given an array 'a' of size 'n' and an integer 'k'.

// Find the length of the longest subarray of 'a' whose sum is equal to 'k'.

// Example :
// Input: ‘n’ = 7 ‘k’ = 3
// ‘a’ = [1, 2, 3, 1, 1, 1, 1]

// Output: 3

// Explanation: Subarrays whose sum = ‘3’ are:

// [1, 2], [3], [1, 1, 1] and [1, 1, 1]

// Here, the length of the longest subarray is 3, which is our final answer.

#include <bits/stdc++.h>
using namespace std;

int brute2(int arr[], int n, int k)
{
    int len = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        int sum = 0;
        for (int j = i; j <= n - 1; j++)
        {
            sum = sum + arr[j];

            if (sum == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int brute(int arr[], int n, int k)
{
    int len = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of K(sum of longest sub-array):";
    cin >> k;

   // int length = brute(arr, n, k);
    int length = brute2(arr, n, k);

    cout << "The length of the longest sub-array with sum " << k << " is: " << length;
}