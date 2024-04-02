#include<iostream>
#include<vector>
using namespace std;
void remove(vector<int>& arr ,vector<int>& original ,int idx = 0){
    if(idx = arr.size()){
       return;
    }
    int a = original[idx];
    if(a==1) remove(arr,original ,idx+1);
    else{
        arr.push_back(a);
        remove( arr, original , idx+1);
    }
}
int main(){
    vector <int> arr;
    vector <int> original;
     for(int i = 0;i<5; i++){
        int x;
        cin>>x;
        original.push_back(x);
    }
    int idx = 0 ;
    remove(arr , original , idx);
    for(int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i];
    } 
}