#include <bits/stdc++.h>
using namespace std;

// Parameterised
//  void recursion_sumP(int i, int sum){
//      if(i == 0){
//          cout << sum;
//          return;
//      }
//      recursion_sumP(i - 1, sum + i);
//  }
//  int main(){
//      int n;
//      cin >> n;
//      recursion_sumP(n, 0);
//      return 0;
//  }

// Functional ----------------------------------------------
// int recursion_sumF(int n) //bcz its returning smh integer so int funcName()!!!
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + recursion_sumF(n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << recursion_sumF(n);
//     return 0;
// }

// Factorial recursion-------------------------------------

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}
