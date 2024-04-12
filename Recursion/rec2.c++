#include<bits/stdc++.h>
using namespace std;

// void f(int i,int  n){
//     if(i > n){
//         return;
//     }
//     cout << "Sayan" << endl;
//     f(i + 1, n); // also can be written as f(i + 1, n)
// }
// int main(){
//     int i = 1, n;
//     cin >> n;
//     f(i, n);
// }
// 1 to N

//--------------------------------------------------------

// void fn(int i, int n){
//     if(n <= 0){
//         return;
//     }
//     cout << n << endl;
//     fn(i, n - 1);
// }
// N to 1 using forward recursion

//---------------------------------------------------------

// void fn( int n){
//     if(n < 1) return;
//     fn(n - 1);
//     cout << n << endl;
// }
// // 1 to N using backward recursion

// int main(){
//     int n;
//     cin >> n;
//     fn(n);
// }

//---------------------------------------------------------

void fn(int i, int n){
    if(i > n) return;
    fn(i + 1, n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    fn(1, n);
    return 0;
}
// N ro 1 using backtracking