/*

https://leetcode.com/problems/same-tree/description/

*/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        else if(!p) return false;
        else if(!q) return false;

        return p->val == q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};
