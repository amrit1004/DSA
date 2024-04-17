#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[] = {6,5,3,2,9 ,11,7 ,8};
  int k = 3;
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int> ans;
  priority_queue<int ,vector<int> ,greater<int>> pq;
  for(int i = 0; i<n; i++){
    pq.push(arr[i]);
    if(pq.size()>k) {
    ans.push_back(pq.top());
    pq.pop();
    }
  }
  while(pq.size()>0){
    ans.push_back(pq.top());
    pq.pop(); // for rest of the element
  }
 for(int i = 0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
 }
}