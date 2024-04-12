#include <iostream>
using namespace std;
int main() {
    int n[5] = {1,2,3,4,5};
    cout << "the numbers are:\n";
    for(int i = 0; i < 5; i++){
        cout << n[i] << "\n";
    }
    return 0;
}
//--------------------------------------------
//input from the user
#include <iostream>
using namespace std;
int main() {
    int n[5];
    cout << "enter the nos.";
    for(int i = 0; i< 5; i++){
        cin >> n[i];
    }
    cout << "the numbers are:\n";
    for(int i = 0; i < 5; i++){
        cout << n[i] << "\n";
    }
    return 0;
}