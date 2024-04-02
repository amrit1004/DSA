#include<iostream>
using namespace std;
class stack{
    public:
  int arr[5];
  int idx = -1;
  void push(int val){
    if(idx==4){
        cout<<"Stack if full"<<endl;
        return;
    }
    idx++;
    arr[idx] == val;
  }
  void pop(){
    idx--;
  }
  int top(){
    return arr[idx];
  }
  int size(){
    return idx+1;
  }
  void display(){
    for(int i = 0 ; i<=idx; i++){
        cout<<arr[idx]<<endl;
    }
  }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); // stack is full
    cout<<st.size();
}