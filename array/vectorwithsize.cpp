#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(5, 7);// size = 5 and each value has value = 7
    cout<<v.size();
    cout<<v.capacity();

}