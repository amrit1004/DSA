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
    //spiral
    int minr = 0 , minc = 0;
    int maxr = m-1, maxc = n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j = minc; j<= maxc; j++){
            cout<<matrix[minr][j]<<" ";
        }
        minr ++;
        //down
        for(int i = minr ; i<=maxr; i++){
            cout<<matrix[i][maxc]<<" ";
        }
        maxc--;
    
    //left
    for(int j = maxc ; j>=minc; j--){
            cout<<matrix[maxr][j]<<" ";
        }
        maxr--;
    
    //up
    for(int i = maxr ; i>=minr; i--){
            cout<<matrix[i][minc]<<" ";
        }
        minc++;
}
}
    

