#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }

    cout << "Sorted Array: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i; // assuming first index of every iteration as minimum

        for (int j = i + 1; j <= n - 1; j++) // iterating from next element of i/min to last element
        {
            if (arr[j] < arr[min]) // checking if that element is smaller than assumed minimum
                min = j;           // if the number is smaller than assumed minimum, put that smaller index in assumed min index
        }
        swap(arr[i], arr[min]); // swapping assumed(old) min value with new min value
    }

    cout << "Sorted Array: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int did_swap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                did_swap++;
            }
        }
        if (did_swap == 0)
            break;
    }

    cout << "Sorted Array: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    int choice;

    while (1)
    {
        cout << endl;
        cout << "MENU: " << endl;
        cout << "0.Exit" << endl;
        cout << "1. Selection Sort" << endl;
        cout << "2. Bubble Sort" << endl;
        cout << "3. Insertion Sort" << endl;
        cout << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {

        case 0: 
            exit(1);

        case 1:
            selection(arr, n);
            break;

        case 2:
            bubble(arr, n);
            break;

        case 3:
            insertion(arr, n);
            break;

        default:
            cout << "Wrong Choice Selected." << endl;
            break;
        }
    }
    cout << endl;
}