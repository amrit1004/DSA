#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int> s;
    s.insert(2);
    s.insert(5);
    s.insert(3);
    for( int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
    map<int , int> m;
    m[3] = 10;
    m[1] = 30;
    m[2] = 20;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}