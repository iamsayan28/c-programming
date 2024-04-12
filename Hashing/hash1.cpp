#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     //precompute
//     int hash[10000000] = {0}; //size 13 since it starts from 0 goes till 12(atmax was 12)
//     for(int i = 0; i < n; i++){
//         hash[arr[i]]++;
//     }

//     int q;
//     // cout << "Enter the no. of queries you want to match:";
//     cin >> q;
//     while(q != 0){
//         int number;
//         // cout << "Enter the no. you want to know the freq.of:" << endl;
//         cin >> number;
//         // fetch
//         cout << hash[number] << endl;
//     }
// }

//Character Hashing
int main(){
    string s;
    cin >> s;

    //pre compute
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Enter the no. of queries you want to match:";
    cin >> q;
    while (q--){
        char c;
        cout << "Enter the charac. you want to know the freq.of:" << endl;
        cin >> c;
        //fetch
        cout << hash[c - 'a'] << endl; //hash[c - 'a'] position of array of string s which is 0,1,2,.. and 0 has a, 1 has b,..
    }

    return 0;
}

//using map for counting the freq. of nos.
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     //pre compute
//     map<int, int> mpp;
//     for(int i = 0; i < n; i++){
//         mpp[arr[i]]++; 
//         // agar array mein 0th posi mein 1 hai toh ++ hoga to 1
//         // agar array mein 1st posi mein 2 hai toh ++ hoga to 1
//         // agar array mein 2nd posi mein 1 hai toh ++ hoga to 2 kyuki voh apna memory mein jiska key 1 hai voh wa pe jaake ++ kar dein ga 
//     }

//     int q;
//     cout << "Enter the no. of queries:" << endl;
//     cin >> q;
//     while(q--){
//         int number;
//         cout << "Enter the no. you want the freq. of:";
//         cin >> number;
//         cout<< mpp[number] << endl;
//     }
//     return 0;
// }


// //using map for counting the freq. of charac.
// int main(){
//     string s;
//     cin >> s;
//     int length = s.length();
//     map<char, int> mpp;
//     for(int i = 0; i < length; i++){
//         mpp[s[i]]++; 
//     }

//     int q;
//     cout << "Enter the no. of queries:" << endl;
//     cin >> q;
//     while(q--){
//         char c;
//         cout << "Enter the char. you want the freq. of:";
//         cin >> c;
//         cout<< mpp[c] << endl;
//     }
//     return 0;
// }


//same but unordered map
int main(){
    string s;
    cin >> s;
    int length = s.length();
    unordered_map<char, int> mpp;
    for(int i = 0; i < length; i++){
        mpp[s[i]]++; 
    }

    int q;
    cout << "Enter the no. of queries:" << endl;
    cin >> q;
    while(q--){
        char c;
        cout << "Enter the char. you want the freq. of:";
        cin >> c;
        cout<< mpp[c] << endl;
    }
    return 0;
}