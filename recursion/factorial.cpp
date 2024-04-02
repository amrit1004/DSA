#include<iostream>
using namespace std;
int factorial(int n){
    int fact;
    if(n==1){
        return 1;
    }
    return fact = n*factorial(n-1);
    
    }
int main(){
    int n ;
    cin>>n;
    cout<<factorial(n);
   
}

  