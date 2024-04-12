#include<bits/stdc++.h>
using namespace std;
int c = 0;
void fn(){
    if (c == 3){
        return;
    }
    cout << c << endl;
    c++;
    fn();
}
int main(){
    fn();
    return 0;
}
// recursion is where the fucntion calls itself again and again untill a specified condition is made and all the fn calls are stored in the stack and does it untill it reaches a point called stack overflow. Base Case - condition that stops a recursive function from calling itself.