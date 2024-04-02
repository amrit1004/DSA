#include<iostream>
using namespace std;
int main(){
    int ar[] ={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = 13;
    int lo = 0;
    int hi = n-1;
    int x = 4;
    bool flag = false;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(x==ar[mid]){
          {
            if(ar[mid+1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else{
                lo = mid+1;
            }
          }
        }
         else if(ar[mid]<x){
            lo = mid+1;
            
            
         }
         else{
            hi = mid-1;
         }   
    }
    if(flag==false){
        cout<<-1;
    }
}