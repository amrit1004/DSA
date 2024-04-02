#include<iostream>
using namespace std;
int binsearch(int arr[] , int size , int key){
    int s = 0;
    int e = size - 1;
    int mid = s +((e-s)/2);
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]< key){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int main(){
    int arr[5] = {2 , 4 , 6 , 7, 8};
    int ans = binsearch(arr , 5 , 4);
    cout<<ans;
}