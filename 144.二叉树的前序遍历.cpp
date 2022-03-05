/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-03 21:46:22
 * @FilePath     : e:\Leetcode刷题\144.二叉树的前序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 浜屽弶鏍戠殑鍓嶅簭閬嶅巻
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traversal(TreeNode *root, vector<int>& res) {
        if(root == NULL) return;
        res.push_back(root->val);
        traversal(root->left, res);
        traversal(root->right,res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root,result);
        return result;
    }
};
// @lc code=end

