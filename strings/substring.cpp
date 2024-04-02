#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcdef";
    // s.substr(idx) => prints substring with index greater than or equal to idx
    cout<<s.substr(3);
    cout<<s.substr(3 ,3);
}