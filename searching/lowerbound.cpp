#include<iostream>
using namespace std;
int main(){
    int ar[9] ={1,2,4,5,7,8,12,13,18};
    int n = 9;
    int lo = 0;
    int hi = n-1;
    int x = 7;
    bool flag = false;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(x==ar[mid]){
            flag = true;
            cout<<ar[mid-1];
            break;
        }
         else if(ar[mid]<x){
            lo = mid+1;
            
            
         }
         else{
            hi = mid-1;
         }   
    }
    if(flag==false){
        cout<<ar[hi];
    }
}