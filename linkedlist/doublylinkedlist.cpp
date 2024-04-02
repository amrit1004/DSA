#include <iostream>
using namespace std;
class Node
{ // user defined data type
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};
// void display(Node* head){
//     while(head){
//         cout<<head->val<<" ";
//         head = head->next;
//     }
// }
void displayrev(Node *tail)
{
  while (tail)
  {
    cout << tail->val << " ";
    tail = tail->prev;
  }
}

void displayrec(Node *head)
{
  if (head == NULL)
    return;
  displayrec(head->next);
  cout << head->val << " ";
}
class DLL
{
  // user defined data structure
public:
  Node *head;
  Node *tail;
  int size = 0;
  DLL()
  {
    head = tail = NULL;
    size = 0;
  }
  void insertatend(int val)
  {
    Node *temp = new Node(val);
    if (size == 0)
      head = tail = temp;
    else
    {
      tail->next = temp;
      temp->prev = tail;
      tail = temp;

    }
      size++;
  }
  void insertathead(int val)
  {
    Node *temp = new Node(val);
    if (size == 0)
      head = tail = temp;

    else
    {
      temp->next = head;
      head->prev = temp;
      head = temp;
    }
    size++;
  }
  void insertatidx(int idx, int val)
  {
    if (idx < 0 || idx > size)
      cout << "Invalid index";
    else if (idx == 0)
      insertathead(val);
    else if (idx == size)
      insertatend(val);
    else
    {
      Node *t = new Node(val);
      Node *temp = head;
      for (int i = 1; i < idx - 1; i++)
      {
        temp = temp->next;
      }
      t->next = temp->next;
      temp->next = t;
      t->prev = temp;
      t->next->prev = t;
      size++;
    }
  }
  void display()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->val << " ";
      temp = temp->next;
    }
    cout<<endl;
  }
  void delethead(){
    if(size==0){
      cout<<"list is empty";
    }
    else{
      head = head->next;
     if(head) head->prev = NULL;
     if(head==NULL) tail = NULL;
    }
    size --;
  }
  void delettail(){
    if(size==0){
      cout<<"list is empty";
    }
    else if(size==1){
      delethead();
    }
    else{
      Node* temp = tail->prev;
      temp->next = NULL;
      tail = temp;
    }
  }
};
int main()
{
  DLL list;
  list.insertatend(10);
  list.insertatend(20);
  list.insertatend(30);
  list.display();
  list.insertatend(40);
  list.insertathead(50);
  list.insertatidx(2 , 60);
  list.delettail();
  list.display();
}