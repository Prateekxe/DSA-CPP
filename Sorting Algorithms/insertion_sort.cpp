#include <bits/stdc++.h>
using namespace std;

//take an element and place it to its correct order by checking its left element

// TC --> O(n) : Best
// TC --> O(n^2) : Average, Worst

void insertion(int arr[], int n)
{
    for(int i=0; i<=n-1; i++)
    {
    	int j=i;
    	while(j>0 && arr[j-1]>arr[j])
    	{
    		swap(arr[j], arr[j-1]);
    		j--;
		}
	}
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    insertion(arr, n);
    cout << endl;

    cout << "Sorted Array: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
