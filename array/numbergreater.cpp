#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    for(int i = 0;i<5; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int a;
    cin>>a;
    int count = 0;
    for(int i = 0;i<v.size(); i++){
         if(v[i]>a){
            count++;
         }
        }
    cout<< "The numbers strictly greater are "<<count;    
}