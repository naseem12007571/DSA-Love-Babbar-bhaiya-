class Solution {
public:
    void rotate(vector<int>& nums, int k) {

     vector<int> temp(nums.size());

     for(int i=0;i<nums.size();i++){
         temp[(i+k)%nums.size()]=nums[i];
     }

     nums=temp;
     
    }  
};

// https://www.youtube.com/watch?v=Z7_nMTHROZo&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=22
