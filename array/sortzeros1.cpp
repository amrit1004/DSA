#include <iostream>
#include <vector>
using namespace std;
void twopo( vector<int>& v){
     int n = v.size();
     int i = 0;
     int j = n-1;
     while(i<j){
        if(v[i]==0) i++;
        if(v[j]== 1) j--;
        if(i>j) break;
        if(v[i]== 1 && v[j]== 0){
            v[i]  =0;
            v[j] = 1;
            i++;
            j--;
        }
     }
}
void sort01(vector<int>& v){   //Two pass method
    int n = v.size();
    int noo = 0;
    int noe = 0;
    for(int i = 0 ; i<v.size(); i++){
        if (v[i]==0) noo++;
        else noe++;
    }
    for (int i = 0; i<v.size(); i++){
        if(i<noo) v[i]=0;
        else v[i] =1;
    }
}

void sortarray(vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {    int temp = v[j];
                 v[j] =v[j+1];
                 v[j+1] =temp;
                
            }
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
