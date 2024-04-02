#include<iostream>
using namespace std;
int main(){
    //int arr[3][3];
    int n , m;
    cin>>m>>n;
    int matrix[n][m];
    for(int i = 0; i<n;i++){
        for(int j =0; j<m ;j++){
           cin>>matrix[i][j];
        }
        
    }
    for(int j = 0; j<=m-1;j++){
        if(j%2==0){
            for(int i =n-1;i>=0;i--){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int i = 0; i<=n-1; i++){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
}