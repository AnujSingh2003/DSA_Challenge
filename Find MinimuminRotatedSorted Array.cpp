class Solution {
public:
    int findMin(vector<int>& nums) {
       int start=0,end=nums.size()-1;
       if(nums[start]<nums[end]){
           return nums[start];
       } 
       while(start<end){
           int mid=start+(end-start)/2;
           if(nums[mid]>=nums[0]){
               start=mid+1;
           }
           else end=mid;
       }
       return nums[start];
    }
};