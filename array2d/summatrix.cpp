#include<iostream>
using namespace std;
int main(){
    //int arr[3][3];
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr1[3][3] = {{2,3,4},{7,8,9},{11,1,3}};
    for(int i = 0; i<3;i++){
        for(int j =0; j<3 ;j++){
           
           arr1[i][j] =arr[i][j]+arr1[i][j];
        }
        cout<<endl;
    }
    for(int i = 0; i<3;i++){
        for(int j =0; j<3 ;j++){
           
          cout<<arr1[i][j]<<" ";

        }
        cout<<endl;
    }
    
}