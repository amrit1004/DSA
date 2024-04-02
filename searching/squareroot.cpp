#include<iostream>
using namespace std;
int squarerooot(int n ){
    int s = 0;
    int e = n;
    long long int mid = s +(e-s)/2;
    long long int ans = -1;
    while(s<=e){
    long long int square = mid*mid;
    if(square == n){
        return mid;
    }
    if(square<n){
        ans = mid;   // to check perfect square only return mid
        s = mid +1;

    }
    else { 
        e =  mid -1;
    }
     mid = s +(e-s)/2;

}
    return ans;

}
int main(){
    int n;
    cin>>n;
    cout<<squarerooot(n);
    
}

