/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-04 22:06:43
 * @FilePath     : e:\Leetcode刷题\107.二叉树的层序遍历-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 浜屽弶鏍戠殑灞傚簭閬嶅巻 II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty())
        {
            vector<int> temp;
            int len = que.size();
            for (int i = 0; i < len; i++)
            {
                temp.push_back(que.front()->val);
                if(que.front()->left)   que.push(que.front()->left);
                if(que.front()->right)  que.push(que.front()->right);
                que.pop();
            }
            res.push_back(temp);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

