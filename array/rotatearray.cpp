#include<iostream>
#include<vector>
using namespace std;
void revpartarr(int i , int j ,vector <int>& v){

    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector <int> v;
    for(int i = 0;i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0;i<v.size(); i++){
        cout<<v[i]<<" "; 
        }
    int k = 2;
    int n = v.size();
    revpartarr(0 , n-k-1,v);
    revpartarr(n-k , n-1,v);
    revpartarr(0 , n-1, v); 
    cout<<endl;
    for(int i = 0;i<v.size(); i++){
        cout<<v[i]<<" "; 
        }   
}