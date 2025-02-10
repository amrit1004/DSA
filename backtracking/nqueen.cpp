#include<iostream>
#include<vector>
using namespace std;

vector<vector<char>> grid;
vector<vector<string>> result;
bool canPlaceQueen(int row , int col , int n){
     //column check
     for(int i = row-1 ; i >=0 ; i--){
        if(grid[i][col] == 'Q'){
            return false;
        }
     }
     //left diagnonal check
     for(int i = row-1 , j = col-1 ; i >= 0 && j >= 0;i-- ,j--){
        if(grid[i][j] == 'Q'){
            return false;
        }
     }
     //right diagnonal check
      for(int i = row-1 , j = col+1 ; i >= 0 && j < n;i-- ,j++){
        if(grid[i][j] == 'Q'){
            return false;
        }
     }
     return true;
}

void f(int row ,int n){
    if(row==n){
        vector<string> temp;
        for(int i =0;i<n;i++){
            string res = "";
            for(int j = 0; j<n; j++){
                res+=grid[i][j];
            }
            temp.push_back(res);
        }
        result.push_back(temp);
        return;
    }
    for(int col = 0; col< n; col++){
        if(canPlaceQueen(row , col , n)){
            grid[row][col] = 'Q';
            f(row+1 , n);
            grid[row][col] = '.'; //backtrack
        }
    }
}


vector<vector<string>> nqueen(int n){
   grid.clear();
   result.clear();
   grid.resize(n ,vector<char>(n ,'.'));
   f(0, n);
   return result;
}
int main(){
  int n = 8; // You can set the desired size of the chessboard
    vector<vector<string>> solutions = nqueen(n);
    
    // Print each solution
    for (const auto& solution : solutions) {
        for (const string& row : solution) {
            cout << row << endl;
        }
        cout << "----------------\n"; // Separator between solutions
    }
    return 0;;
    
}