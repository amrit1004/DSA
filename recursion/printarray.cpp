#include<iostream>
using namespace std;
int print(int n ){
    if(n<0) return;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<arr[n-1]<<" ";
    print(n-2);

}
int main(){
  int a =print(5);
  cout<<a;

}
    