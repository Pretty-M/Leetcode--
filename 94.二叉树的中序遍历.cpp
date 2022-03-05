/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-03 22:48:31
 * @FilePath     : e:\Leetcode刷题\94.二叉树的中序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 浜屽弶鏍戠殑涓簭閬嶅巻
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
        res.push_back(root->val);
        traversal(root->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root, result);
        return result;
    }
};
// @lc code=end

