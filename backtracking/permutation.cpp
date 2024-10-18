#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

void permutation(string &str , int i){
    if(i== str.size()-1){
        cout<<str<<"\n";
        return;
    }
    unordered_set<char> s;
    for(int idx = i; idx<str.size(); idx++){
        if(s.count(str[idx])) continue; //repetive case handling
        s.insert(str[idx]);
        swap(str[i],str[idx]);
        permutation(str ,i+1);
        swap(str[idx] ,str[i]); //backtracking
    }
}
int main(){
    string str ="aac";
    permutation(str ,0);
}