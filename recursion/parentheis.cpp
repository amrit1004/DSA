#include<iostream>
#include<string>
using namespace std;
void generate(string s ,int open , int close ,int n ){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n) generate(s+'(' ,open+1 , close , n);
    if(close<open) generate(s+')' ,open , close+1 , n);
}
int main(){
    string s;
    generate("", 0 ,0,3);
}                                                          