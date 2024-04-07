#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(0);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(2);
    int target = 4;
    if(s.find(target)!=s.end()){
         cout<<"exist"<<endl;
    }
    else{
        cout<<"does not exist";
    }
    cout<<s.size()<<endl;
    for(int ele:s){
        cout<<ele<<" ";
    }
}