#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int a =5;
    for(int i = 1; i<=m; i++){
        if(1%2!=0){
        a = 1;}
        else a = 0;
    
    for (int j = 1; j <= i; j++)
    {  
    
      cout<<a;
      if(a==1) a =0;
      else a = 1;
    }
    cout<<endl;
    
}
}