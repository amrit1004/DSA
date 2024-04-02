#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack <int> &st , int val){
     stack <int> temp;
    while(st.size()>0){
        
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtidx(stack <int> &st ,int idx , int val){
     stack <int> temp;
    while(st.size()>idx){
        
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void print(stack <int> st){
    stack <int> temp;
    while(st.size()>0){
        
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
    
}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);  
    st.push(40); 
    st.push(50);
    print(st);
    pushAtBottom(st ,80);
    print(st);
    pushAtidx(st , 2 , 110);
    print(st);
    }