#include<iostream>
#include<stack>
using namespace std ;
int main(){
    int ans[8];
    int arr[8] ={100 , 80 , 60 , 81 ,70 , 60 , 75, 85};
    int n ;
    n = 8;
    stack <int> st;
    ans[0] = 1;
    st.push(0);
    for(int i = 1; i<8; i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i]= -1;
        else ans[i]=st.top();
        ans[i] = i - ans[i];
        st.push(i);
    }
    for(int i = 0 ; i<8;i++){
        cout<<ans[i]<<" ";
    }
}