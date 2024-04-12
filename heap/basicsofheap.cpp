#include<iostream>
#include<queue>
using namespace std;
int main(){
   priority_queue<int> mq; //max heap
   mq.push(10);
   mq.push(6);
   mq.push(-2);
   mq.push(16);    
   cout<<mq.top(); //16 
   mq.pop(); // 16 will get removed
   cout<<mq.top();
   priority_queue<int ,vector<int> , greater<int> > pq;  // min Heap
   pq.push(10);
   pq.push(6);
   pq.push(-2);
   pq.push(16);    
   cout<<pq.top(); //16 
   pq.pop(); // 16 will get removed
   cout<<pq.top();
    return 0;
}

