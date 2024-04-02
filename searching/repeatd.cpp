#include<iostream>
using namespace std;
int binsearch(int arr[] , int size ){
    int s = 0;
    int e = size - 1;
    int mid = s +((e-s)/2);
    while(s<=e){
        if(arr[mid] == mid+1){
            s = mid+1;
        }
        if(arr[mid]==mid){
            if(arr[mid-1]= arr[mid]){
            cout<<arr[mid];
            break;
            }
        }
       
        
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    
}
int main(){
    int arr[6] = {1,2,3,4,5,5};
    int ans = binsearch(arr , 6 );
    cout<<ans;
}