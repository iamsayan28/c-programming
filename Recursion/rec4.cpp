#include <bits/stdc++.h>
using namespace std;

// void swap_recur(int i, int arr[], int n)
// {
//     if (i >= n / 2)
//     {
//         return;
//     }
//     swap(arr[i], arr[n - i - 1]);
//     swap_recur(i + 1, arr, n);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n]; //declaring the array after i have taken the size from the user
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     swap_recur(0, arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


//Palindrome using recursion ---------------------------------------------
bool f(int i, string s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return f(i + 1, s);
}

int main(){
    string s = "msdam";
    cout << f(0, s);
    return 0;
}