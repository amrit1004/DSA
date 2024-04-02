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
    for(int k = 0; k<n; k++){
    int i = 0;
    int j = n-1;
    while(i<=j){
        int temp = matrix[i][k];
        matrix[i][k] = matrix[j][k];
        matrix[j][k] = temp;
        i++;
        j--;

    }
    }
       for(int i = 0; i<n;i++){
        for(int j =i+1; j<m ;j++){
          int temp = matrix[i][j];
          matrix[i][j] = matrix[j][i];
          matrix[j][i] = temp;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i<3;i++){
        for(int j =0; j<3 ;j++){
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}