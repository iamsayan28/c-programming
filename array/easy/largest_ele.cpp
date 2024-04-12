#include <bits/stdc++.h>
using namespace std;

int largest_ele(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ele = largest_ele(arr, n);

    cout << ele;
}