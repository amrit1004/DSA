#include<iostream>
using namespace std;
int main(){
    int ar[] ={0,0,0,0,0,0,1,1,1,1,1,1,1};
    int n = 13;
    int lo = 0;
    int hi = n-1;
    int x = 3;
    bool flag = false;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(x==ar[mid]){
          {
            if(ar[mid-1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else{
                hi = mid -1;
            }
          }
        }
         else if(ar[mid]<x){
            lo = mid+1;
            
            
         }
         else{
            hi = mid-1;
         }   
        cout<<n-mid;
    }
}