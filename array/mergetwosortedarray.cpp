#include<iostream>
#include<vector>
using namespace std;
vector <int> merge(vector<int>& v1, vector<int>& v2){
    int n = v1.size();
    int m = v2.size();
    int i = 0 ;
    int j = 0;
    int k = 0;
    vector <int> res(m+n);
    while( i<=n-1 &&  j<=m-1){
        if(v1[i]<v2[j]){
            res[k] = v1[i];
            i++;
            k++;
        }
         else if(v1[i]>v2[j]){
            res[k] = v2[j];
            j++;
            k++;
        }
        if(i==n){
            while(j<=m-1){
                res[k]=v2[j];
                k++;
                j++;
            }
        }
        if(j==m){
            while(i<= n-1){
                res[k]=v1[i];
                k++;
                i++;
                
            }
        }


    }
    return res;
}

