#include<iostream>
#include<algorithm>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
       arr[idx] = x;
       int i = idx;
       idx++;
       while(i!=1){
        int parent = i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i] ,arr[parent]);
            }
            else break;
            i = parent;
       }
    }

    void pop(){
        idx--;
        arr[1] =arr[idx];
        int i= 1;
        while(true){
            int left = 2*i ,right = 2*i+1;
            if(left>idx-1)  break;
            if(right>idx-1){
            if(arr[left]<arr[right]){
                swap(arr[i] , arr[left]);
                i = left;
              }
              break;
            }
            if(arr[left]<arr[right]){
                if(arr[i]>arr[left]){

                 swap(arr[i] , arr[left]);
                 i = left;
                }
                 else break;
            } 

            else {
                if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i= right;
                }
                else break;
            }
        }

    }
    int size(){
        return idx-1;
    }
    void display(){
        for(int i = 1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(3);
    cout<<pq.top();
    cout<<pq.size()<<endl;
    pq.pop();
    cout<<pq.size()<<endl;
    cout<<pq.top();
    pq.display();
    return 0;
}