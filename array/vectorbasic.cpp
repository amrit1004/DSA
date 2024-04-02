#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(6);
cout<<v.size();// size;
cout<<v.capacity();//capacity
v.push_back(1);
v.push_back(9);
v.push_back(0);
cout<<v.capacity();



}