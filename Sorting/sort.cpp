#include <bits/stdc++.h>
using namespace std;

// void selection_sort(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int min = i;
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//         swap(arr[min], arr[i]);
//     }
// }

// void bubble_sort(int arr[], int n)
// {
//     for (int i = n - 1; i >= 1; i--)
//     {
//         int didSwap = 0;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // swap(arr[j], arr[j + 1]);
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//                 didSwap = 1;
//             }
//         }
//         if (didSwap == 0)
//         {
//             break;
//         }
//     }
// }

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
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
    // selection_sort(arr, n);
    // bubble_sort(arr, n);
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}