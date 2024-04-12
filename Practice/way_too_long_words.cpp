#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        int length = arr[i].length();
        if(length > 10){
            char first = arr[i][0];
            char last = arr[i][length - 1];
            string s2 = "";
            for(int j = 1; j < length - 1; j++){
                s2 += arr[i][j];
            }
            cout << first << s2.length() << last << endl;
        } else {
            cout << arr[i] << endl;
        }

    }

}