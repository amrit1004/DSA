#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n;i++){
        int k = i;
        while(k<n){
            arr[i] = arr[k-1]*arr[k+1];
            arr[-1] = 1;
            k++;
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}