#include<iostream>
using namespace std;
class Node{ //user defined data type
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
   
};
class LinkedList{ 
//user defined data structure
public:
  Node* head ;
  Node* tail ;
  int size = 0;
  LinkedList(){
    head =tail=NULL;
    size = 0;
  }
  void insertatend(int val){
   Node* temp = new Node(val);
   if(size==0) head=tail=temp;
  
  else{
    tail->next =temp;
    tail= temp;
  }
  size++;
  }
  void insertathead(int val){
   Node* temp = new Node(val);
   if(size==0) head=tail=temp;
  
  else{
    temp->next=head;;
    head = temp;
  }
  size++;
  }
    void insertatidx(int idx , int val){
   if(idx<0 || idx>size) cout<<"Invalid index";
   else if(idx==0) insertathead(val);
   else if(idx==size) insertatend(val);
   else{
    Node*t = new Node(val);
    Node* temp = head;
    for(int i = 1; i<idx-1; i++){
      temp = temp->next;
    }
    t->next = temp->next;
    temp->next = t;
    size++;
  }
  }
  void display(){
    Node* temp = head;
    while(temp!=NULL){
      cout<<temp->val<<" ";
      temp = temp->next;
    }
  }
};
int main(){
    LinkedList ll;
    ll.insertatend(20);
    ll.display();
    ll.insertathead(30);
    ll.display();
    
}