#include <bits/stdc++.h>
using namespace std;
void merge_sort(int arr[], int low, int high)
{
    if(low >= high) return;
    int middle = (low + high) / 2;
    merge_sort(arr, low, middle);
    merge_sort(arr, middle + 1, high);
    merge(arr, low, middle, high);
}

void merge(int arr[], int low, int middle, int high){
    vector <int> temp;
    int left = low;
    int right = middle + 1;
    while(left <= middle && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= middle){
        temp.push_back(arr[left]);
        left++;
    }
    while( right <= middle){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i];
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
    int low = 0;
    int high = n - 1;
    merge_sort(arr, low, high);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    for(auto rr:arr){
        cout << rr << " ";
    }
}