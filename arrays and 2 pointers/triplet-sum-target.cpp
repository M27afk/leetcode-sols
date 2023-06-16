/*

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

*/

 vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int s=nums.size();
        set<vector<int>> st;
        for(int i=0;i<=s-2;++i){
            int l=i+1,r=s-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0)
               {// ans.push_back({nums[i],nums[l],nums[r]});
               st.insert({nums[i],nums[l],nums[r]});
               l++;r--;
                }
                else if(nums[i]+nums[l]+nums[r]<0){
                    l++;
                }

                else{
                    r--;
                }
            }
        }
        for(auto i:st)
        ans.push_back(i);
        return ans;
    }
