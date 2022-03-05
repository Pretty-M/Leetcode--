/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-03 22:34:38
 * @FilePath     : e:\Leetcode刷题\145.二叉树的后序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 浜屽弶鏍戠殑鍚庡簭閬嶅巻
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
        traversal(root->left, res);
        traversal(root->right,res);
        res.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root, result);
        return result;
    }
};
// @lc code=end

