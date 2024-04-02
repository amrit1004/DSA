#include <iostream>
#include <vector>
using namespace std;
void twopo( vector<int>& v){
     int n = v.size();
     int i = 0;
     int j = n-1;
     while(i<j){
        if(v[i]<0) i++;
        if(v[j] >=0) j--;
        if(i>j) break;
        if(v[i]>=0 && v[j]< 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
     }
}
int main(){
    vector <int> v;
    for(int i = 0;i<8; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    twopo(v);
    for(int i = 0;i<v.size(); i++){
        cout<<v[i]<<" "; 
        }
}
