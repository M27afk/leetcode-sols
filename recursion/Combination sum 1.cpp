/*Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target.
You may return the combinations in any order.
The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency
 of at least one of the chosen numbers is different.*/

void csum(int ind, int target,vector<int>& candidates,vector<vector<int>> &sol,vector<int> &ans){
        if(ind==candidates.size()){
            if(target==0){
                sol.push_back(ans);
            }
            return;
        }

        if(candidates[ind]<=target){
            ans.push_back(candidates[ind]);
            csum(ind,target-candidates[ind],candidates,sol,ans);
            ans.pop_back();
        }
         csum(ind+1,target,candidates,sol,ans);
           
        
}
