#include<iostream>
#include<vector>
#include<algorithm>
# define ll long long int
using namespace std;
bool cmp(int x , int y){
    return x>y;
}
ll minCostToBreak(int n , int m ,vector<ll> &X ,vector<ll> &Y){
    sort(X.begin() , X.end(),cmp);
    sort(Y.begin() , Y.end(),cmp);
    int hz = 1;
    int vr = 1;
    int h = 0 , v= 0;
    ll ans  =0;
    while(h< Y.size() && v<X.size() ){
        if(X[v] >Y[h]){
            ans += X[v]*vr;
            hz++;
            v++;
        }
        else{
             ans += Y[h]*hz;
            vr++;
            h++;
        }
    }
    while (h<Y.size())
    {
        ans += Y[h]*hz;
            vr++;
            h++;
    }
    while(v<X.size()){
         ans += X[v]*vr;
            hz++;
            v++;
    }
    
   return ans;
}

int main(){
    int m , n;
    cin>>m>>n;
    vector<ll> hor ,ver;
     for(int i = 0 ; i<m-1; i++){
        int x ;
        cin>>x;
        ver.push_back(x);
    }
    for(int i = 0 ; i<n-1; i++){
        int x ;
        cin>>x;
        hor.push_back(x);
    }
    cout<<minCostToBreak(n , m, hor ,ver);
    return 0;
}