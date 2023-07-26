// leetcode 31




class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        
        // 1) Finding pivot index
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }
        
        // If the array is already in the greatest permutation
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        // 2) Sorting/reversing after pivot
        reverse(nums.begin() + idx + 1, nums.end());
        
        // 3) Finding the next greater element after idx
        int j = -1;
        for (int i = idx + 1; i < n; i++) {
            if (nums[i] > nums[idx]) {
                j = i;
                break;
            }
        }
        
        // 4) Swapping idx and j
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
    }
};