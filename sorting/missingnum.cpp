#include<iostream>
#include<vector>
using namespace std ;
   int missingNumber(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        while(i<n){
            int correctidx = nums[i];
            if(i==correctidx|| nums[i]==n) i++;
            else{
                swap(nums[i] , nums[correctidx]);
            }
        }
        for(int i = 0; i<n; i++){
            if(i!=nums[i] ){
                return i;
                break;
            }
        }
        return n;
    }
    int main(){
        vector <int> nums;
        for(int i = 0;i<4;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        missingNumber(nums);
        cout<<missingNumber;
    }