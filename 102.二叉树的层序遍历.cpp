/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-04 22:03:10
 * @FilePath     : e:\Leetcode刷题\102.二叉树的层序遍历.cpp
 */
/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 浜屽弶鏍戠殑灞傚簭閬嶅巻
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > res;
        if(!root) return res;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty())
        {
            vector<int> tmp;
            int len = que.size();
            for (int i = 0; i < len; i++)
            {
                TreeNode* node = que.front();
                que.pop();
                tmp.push_back(node->val);
                if(node->left)  que.push(node->left);
                if(node->right) que.push(node->right);
            }
            res.push_back(tmp);
        }
        return res;
    }
};
// @lc code=end

