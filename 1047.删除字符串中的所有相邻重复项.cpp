/*
 * @Descripttion : ͨ��B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-02 19:54:03
 * @FilePath     : e:\Leetcodeˢ��\1047.ɾ���ַ����е����������ظ���.cpp
 */
/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 *
 * [1047] 删除字符串中的所有相邻重复项
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        string ret;
        for(auto c:s) {
            if(ret.empty() || c!=ret.back())
                ret.push_back(c);
            else
                ret.pop_back();
        }
        return ret;
    }
};
// @lc code=end

