#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector <int> v;
    v.push_back(4);
     v.push_back(5);
     v.push_back(6);
      v.push_back(9) ;
      v.push_back(3);

    for(int i = 0; i<=v.size()-1; i++){
        for(int j = 0; j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<v[i]<<v[j];
            }
        }

    }
    
}