/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-05 20:21:46
 * @FilePath     : e:\Leetcode刷题\515.在每个树行中找最大值.cpp
 */
/*
 * @lc app=leetcode.cn id=515 lang=cpp
 *
 * [515] 鍦ㄦ瘡涓爲琛屼腑鎵炬渶澶у�?
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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> que;
        if(root == NULL)    return res;
        que.push(root);

        while (! que.empty())
        {
            int len = que.size();
            int maxValue = INT_MIN;
            TreeNode* temp = nullptr;
            for(int i = 0; i < len;i++) {
                temp = que.front();
                que.pop();
                maxValue = max(maxValue,temp->val);

                if(temp->left)  que.push(temp->left);
                if(temp->right) que.push(temp->right);
            }
            res.push_back(maxValue);
        }
        return res;
    }
};
// @lc code=end

