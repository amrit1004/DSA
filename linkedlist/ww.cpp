// Given the head of a sorted linked list, delete all duplicates such that each element apppears only once

# include <iostream>
using namespace std;

class Node
{   
    public :
    int value;
    Node * next;
    Node(int data)
    {
     value = data;
     next = NULL;
    }
};


void InsertAtHead(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node -> next = head;
    head = new_node;

}

void DelDuplicateNode(Node *head)
{   
    Node *current = head;
    while(current != NULL )
    {
        while( current->next != NULL && current->value == current->next->value)
        {   
            // Delete current->next
            Node *temp =current->next;  // Node to be deleted
            current->next = current->next->next;
            free(temp);
            
        }  // this loop ends when current node and next node values are different or linked list ends
        current = current->next;
    }
}
void Display(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<"->";
        temp = temp->next;

    }
   cout<<"NULL"<<endl;
}


int main()
{
Node *head = NULL;

InsertAtHead(head,3);
Display(head);


InsertAtHead(head,3);
Display(head);


InsertAtHead(head,3);
Display(head);


InsertAtHead(head,2);
Display(head);


InsertAtHead(head,2);
Display(head);


InsertAtHead(head,1);
Display(head);

DelDuplicateNode(head);
Display(head);

return 0;
}