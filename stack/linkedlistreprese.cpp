#include<iostream>
using namespace std;
class Node{ 
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
   
};
class stack{
    public:
  Node* head;
  int size;
  stack(){
      head =NULL;
      size = 0;
  }
  void push(int val){
    Node*temp = new Node(val);
    temp->next = head;
    head = temp;
  }
  int pop(){
    if(head==NULL){
        cout<<"Stack is empty";
        return;
    }
    head = head->next;
    size--;
    }
  
  int top(){
    if(head==NULL){
        cout<<"Stack is empty";
        return;
    }
    return head->val;
  }
  void print(){
    
  }
  void display(){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
  }
};
int main(){
    stack st;
    st.pop();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); // stack is full
    
}