#include<iostream>
#include<stack>
using namespace std ;
int main(){
    int ans[7];
    int arr[7] ={2 , 4 , 5 , 7 , 8 , 6 , 9 };
    int n ;
    n = 7;
    stack <int> st;
    ans[n-1] = -1;
    st.push(arr[n-1]);
    for(int i = n-2; i>=0; i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i]= -1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
    for(int i = 0 ; i<7;i++){
        cout<<ans[i]<<" ";
    }
}