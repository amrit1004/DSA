#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> mp;
    pair<string ,int> p1;
    p1.first = "Amrit";
    p1.second = 45;
    mp.insert(p1);
    mp["Harsh"] = 76;
    mp["Rohit Sharma"] = 90;
    for(auto p:mp){
        cout<<p.first<<" "<<p.second<<endl;
    }
}