// return all possible subsets (the power set). The solution set must not contain duplicate subsets. 
class Solution {
public:
    static void subset(int ind, vector<int>& nums,vector<vector<int>> &soln,vector<int>& arr){
        if(ind==nums.size()){
            soln.push_back(arr);
            return;
        }

        arr.push_back(nums[ind]);
        subset(ind+1,nums,soln,arr);
        arr.pop_back();

        subset(ind+1,nums,soln,arr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> soln;vector<int> arr;
        subset(0,nums,soln,arr);
        return soln;
    }
};
