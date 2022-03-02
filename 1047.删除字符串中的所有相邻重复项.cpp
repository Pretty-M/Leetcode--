/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-02 19:54:03
 * @FilePath     : e:\Leetcode刷题\1047.删除字符串中的所有相邻重复项.cpp
 */
/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 *
 * [1047] 鍒犻櫎瀛楃涓蹭腑鐨勬墍鏈夌浉閭婚噸澶嶉」
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

