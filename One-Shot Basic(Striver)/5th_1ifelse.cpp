#include<bits/stdc++.h>
using namespace std;
//Wap that takes an input of age and prints if you are an adult or not
// >=18, yes
// < 18, no
int main() {
    int age;
    cout << "Enter your age:";
    cin >> age;
    if(age >= 18){
        cout << "You are an adult";
    }
    else{
        cout << "You are not an adult";
    }
    return 0;
}