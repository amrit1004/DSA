#include<iostream>
#include<algorithm>
#include<limits.h>
#define inf INT_MAX
using namespace std;

int f(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1+ min({f(n-1) ,(n%2==0)? f(n/2): inf ,(n%3==0)?f(n/3):inf});
}

int main(){
    int  n;
    cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}