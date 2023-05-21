/*Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.*/
static void csum(int ind,vector<int>& candidates, int target,vector<vector<int>>& sol,vector<int>& ans){
        if(target==0){
            sol.push_back(ans);
            return;
        }

        for(int i=ind;i<candidates.size();++i){
            if(i>ind && candidates[i]==candidates[i-1]) continue;
            if(candidates[i] > target) break;
            ans.push_back(candidates[i]);
            csum(i+ 1,candidates,target-candidates[i],sol,ans);
            ans.pop_back();
        }    
     }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

         vector<vector<int>> sol;vector<int> ans;
        sort(candidates.begin(),candidates.end()); // IMPORTANT
        csum(0,candidates,target,sol,ans);
        return sol;
    }
