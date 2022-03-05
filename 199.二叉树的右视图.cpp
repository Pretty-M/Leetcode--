/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-05 18:35:52
 * @FilePath     : e:\Leetcode刷题\199.二叉树的右视图.cpp
 */
/*
 * @lc app=leetcode.cn id=199 lang=cpp
 *
 * [199] 浜屽弶鏍戠殑鍙宠鍥?
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root == NULL) return res;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()) {
            int size = Q.size();
            res.push_back(Q.front()->val);
            while (size --)
            {
                TreeNode* temp = Q.front();
                Q.pop();
                if(temp->right)     Q.push(temp->right);
                if(temp->left)      Q.push(temp->left);
            }
        }
        return res;
    }
};
// @lc code=end

