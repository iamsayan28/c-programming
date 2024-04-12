#include <bits/stdc++.h>
using namespace std;

int second_largest_ele(int arr[], int n)
{
    int largest = arr[0];
    int second_largest;

    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            second_largest = largest;
            largest = arr[i];
            // arr2.push_back(largest);
        } else if(arr[i] != largest && arr[i] > second_largest){ // if the arr is [2,3,7,7,5] and secd large still now is 3 and largest is 7  and now we r in [5] element and 1st condi -> 7 < 5 is false and next in else if it is more than second large then sec large will become [5] we already conf that since it is not more than the largest which is [7] and it is more than 3 so the new sec large will become 5
            second_largest = arr[i];
        }
    }
    return second_largest;
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

    int ele = second_largest_ele(arr, n);

    cout << ele;
}