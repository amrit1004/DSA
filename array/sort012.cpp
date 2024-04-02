#include<iostream>
#include<vector>
// void sortColors(vector<int>& nums) {
//         //two pass solution
//         int n = nums.size();
//         int noz = 0;
//         int noo = 0;
//         int notw = 0;
//         for(int i = 0; i<n; i++){
//             if(nums[i]==0) noz++;
//             if(nums[i]==1) noo++;
//             if(nums[i]==2) notw++;

//         }
//         for(int i = 0; i<n; i++){
//             if(i<noz) nums[i] =0;
//             else if(i <(noo+noz)) nums[i] = 1;
//             else nums[i] =2;
//         }
//     }
    void sortColors(vector<int>& nums) {
        //one pass solution
        int lo = 0;
        int mid = 0;
        int hi = nums.size()-1;
        while(mid<= hi){
            if(nums[mid]==2){
                int temp = nums[mid];
                nums[mid] = nums[hi];
                nums[hi] = temp;
                hi--;
            }
            else if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid] = nums[lo];
                nums[lo] = temp;
                lo++;
                mid++;
            }
            else{
                mid++;
            }
        }

    }  
};