#include <bits/stdc++.h>
using namespace std;

// void(doesn't return anything)
//parameterised
//non-parameterised

//--------------------------------

// void printName(){
//     cout << "Hey Sayan!!";
// }

// int main()
// {

//     printName();
//     return 0;
// }


//---------------------------------
// void printName(string name){
//     cout << "Hey " << name;
// }

// int main()
// {
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2); //code reusability
//     return 0;
// }


//SUM OF 2 NOS.-------------------------
// #include<iostream>
// using namespace std;

// int sum(int a,int b){
//     int s = a + b;
//     return s;
// }

// int main(){
//     int a,b;
//     cin >> a >> b;
//     int result = sum(a,b);
//     cout << result;
//     return 0;
// }


//PASS BY VALUE---------------------------(here it makes a copy so original remains unchanged)
// void dosomething(string s){
//     s[0] = "t";
//     cout << s << endl;
// }

// int main(){
//     string s ="raj";
//     dosomething(s);
//     cout << s << endl;
// }

//PASS BY REFERENCE----------------------- (& takes the address of that variable(so it takes the original))
// void dosomething(string &s){
//     s[0] = 't';
//     cout << s << endl;
// }

// int main(){
//     string s ="raj";
//     dosomething(s);
//     cout << s << endl;
// }

void dosomething(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside function: " << arr[0] << endl;
}

int main(){
    int n = 5;
    int arr[n];
    for (int i = 0;i < n ;i++){
        cin >> arr[i];
    }

    dosomething(arr,n);

    cout << "Value inside int main " << arr[0] << endl;
    return 0;
}

