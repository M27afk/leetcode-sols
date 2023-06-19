/*
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.


  */
   int pivotIndex(vector<int>& nums) {
        long sumr=accumulate(nums.begin(),nums.end(),0),suml=0;
        int i=0;
        while(i<nums.size())
        {
            sumr-=nums[i];

            if(suml==sumr)
            return i;

            suml+=nums[i++];
        }
        return -1;
    }
