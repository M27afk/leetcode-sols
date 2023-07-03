/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

time:O(N)
space:O(1)

Trick: Mark the element at nums[value] as negative, so the next time you check the same index and you find it to be negative it is confirmed that 
it was the same value.
Example:
Input: nums = [3,1,3,4,2]
Output: 3
*/

int findDuplicate(vector<int>& nums) {
        for(auto i: nums){
            int idx=abs(i)-1;
            if(nums[idx]<0){
                return abs(i);
            }
            nums[idx]=-nums[idx];
        }
        return -1;
    }
