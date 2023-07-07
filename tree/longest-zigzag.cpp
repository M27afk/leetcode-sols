//https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/

int maxLen=0;
    void helper(TreeNode* root,int dir,int count){

        if(root==NULL)
        return;

        maxLen=max(maxLen,count);
        helper(root->left,0,dir?++count:1);
        helper(root->right,1,dir?1:++count);
    }
    int longestZigZag(TreeNode* root) {
        helper(root,0,0);
        helper(root,1,0);
        return maxLen;
    }
