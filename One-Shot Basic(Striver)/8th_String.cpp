#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Sayan";
    cout << s[0] << "\n";
    
    int len = s.size();
    s[len-1] = 'z';
    cout<<s;

    return 0;
}
