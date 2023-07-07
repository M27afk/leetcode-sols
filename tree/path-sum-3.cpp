//https://leetcode.com/problems/path-sum-iii
long long sum=0; int cnt =0;
    void path(TreeNode* root, int targetSum){

        if(root==NULL)
        return;

        sum+=root->val;

        if(sum==targetSum)
            cnt++;
        
        path(root->left,targetSum);
        path(root->right,targetSum);

        sum-=root->val;
    }
    int pathSum(TreeNode* root, int targetSum) {
         if(root==NULL)
         return 0;

        path(root,targetSum);

         pathSum(root->left,targetSum);
         pathSum(root->right,targetSum);
        return cnt;

    }
};
