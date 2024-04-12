#include<bits/stdc++.h>
using namespace std;

void vectorsExplain() {
    // vector is a container(c++ class which stores collection of objects) which is dynamic in nature
    vector<int> v; 

    v.push_back(1); //puts a new element at the end of the vector
    v.emplace_back(2); // {1,2}

    vector<pair<int, int>> vec;// vector of pair data type
    
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int, int> v(5,100);// 5 instances of 100 {100,100,100,100,100}
    vector<int> v(5); //makes 5 intances of 0 or garbage value

    vector<int> v1(5,200);
    vector<int> v2(v1);

    //points to the memory where element is lying(here at the beginning of the vector)
    vector<int>::iterator it = v.begin();

    it++ //iterates over to the next ele of the ele where v.begin was pointing to
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end(); //{10,30,50} here it points to a memory which is after 50 and to bring it to 50, use it--
    vector<int>::iterator it = v.rend(); //*not imp
    vector<int>::iterator it = v.rbegin(); //*not imp

    cout << v[0] << " " << v.at[0];

    cout << v.back() << " "; //{10,20,30} here it points to the ele at 30

    //print the ele of a vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) //run the iterator till it doesn't reaches the end
    {
        cout << *(it) << " ";
    }

    //shorter version, also auto auto assigns the variable based on the data its carrying
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << it << " ";
    }

    //using for each loop
    for (auto it : v) {
        cout << it << " ";
    }

    //deletion in a vector

}

int main() {
    vectorsExplain();
    return 0;
}