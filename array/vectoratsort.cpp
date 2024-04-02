#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.at(2) = 8; // defininig values
    cout<<v[2];
   // sort(v.begin(), v.end());  // sorting
}

