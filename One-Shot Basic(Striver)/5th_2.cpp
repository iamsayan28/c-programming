#include<bits/stdc++.h>
using namespace std;
int main() {
    int grade;
    cout << "Enter the grade:";
    cin >> grade;
    //here its checked before hand like if its 79 it will be "F" in 1st one then 2nd one will be "T"
    if (80 <= grade){
        cout << "A";
    }else if (60 <= grade){
        cout << "B";
    }else if (50 <= grade){
        cout << "C";
    }else if (45 <= grade){
        cout << "D";
    }else if (25 <= grade){
        cout << "E";
    }else{
        cout << "F";
    }
}