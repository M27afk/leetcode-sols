/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
You must write an algorithm that runs in O(n) time and without using the division operation.
*/

    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> lh(n);
        vector<int> rh(n);

        lh[0]=1;
        rh[n-1]=1;

        for(int i=1;i<n;i++){
            lh[i]=lh[i-1]*nums[i-1];
        }

        for(int i=n-2;i>=0;i--){
            rh[i]=rh[i+1]*nums[i+1];
        }

         for(int i=0;i<n;i++){
             nums[i]=lh[i]*rh[i];
         }
         return nums;
    }
