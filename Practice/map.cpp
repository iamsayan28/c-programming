#include<bits/stdc++.h>
using namespace std;
int main(){
    //using map, create an array of size n and count the freq of digits(user input) present in the array
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mapArr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        //pre compute
        mapArr[arr[i]]++; 
    }

    //size of queries and which query
    int q;
    cin >> q;
    while(q != 0){
        int num;
        cin >> num;

        //fetch and print the frequencies
        cout << mapArr[num] << endl;
        q--;
    }
}