#include<bits/stdc++.h>
using namespace std;

// void explainPairs() {
//     pair<int, int> p = {1,3};
//     cout << p.first << " " << p.second << endl;

//     pair<int, pair<int, int>> q = {1,{2,3}};
//     cout << q.first << q.second.first << q.second.second << endl;

//     pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
//     cout << arr[2].first; //5
// }

// int main() {
//     explainPairs();
// }


int main(){
    pair<int, string> p;
    // p = make_pair(2, "abc");
    p = {2, "abcd"};
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;
}