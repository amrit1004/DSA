#include<iostream>
using namespace std;
#include<vector>
# include<algorithm>
 vector <int> nums;
 void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for(int i = n-2; i>=0; i-- ){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx==-1){// if array is in greatest
             reverse(nums.begin(), nums.end() );
        }
        reverse(nums.begin()+(idx+1), nums.end() );
        //find just greater number 
        int j = -1;
        for(int i = 0 ; i<n; i++){
            if(nums[i]>nums[j]){
                j = i;
            }
        }
        
        //swapping idx and j
        int temp = nums[idx];
        nums[idx]= nums[j];
        nums[j] = temp;
    }
