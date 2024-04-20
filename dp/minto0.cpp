#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;
vector<int> get_digit(int n){
    vector<int> result;
    while(n>0){
      if(n%10!=0){
        result.push_back(n%10);
      }
     n/=10;
    }
    return result;
}
int f(int n){
   if(n==0) return 0;
   if(n<=9) return 1;
   vector<int> d = get_digit(n);
   int res = INT_MAX;
   for(int i = 0; i<d.size(); i++){
      res = min(res ,f(n-d[i]));
   }
   return 1+ res;
}

int main(){
    int n;
    cin>>n;
    cout<<f(n)<<"";
}