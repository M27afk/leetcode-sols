/*
Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.
*/

 bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX,second=INT_MAX;
        for(auto i:nums){
            if(i<=first)
            first=i;

            else if(i<=second)
            second=i;

            else
            return true;

        }
        }
