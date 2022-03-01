/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-01 21:13:34
 * @LastEditTime : 2022-03-01 22:32:09
 * @FilePath     : e:\Leetcode刷题\28.实现-str-str.cpp
 */
/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 瀹炵幇 strStr()
 */

// @lc code=start
class Solution {
public:

    void getNext(int *next, const string &s) {
        int j = 0;
        next[0] = 0;
        for (int i = 1; i < s.size(); i++)
        {
            while(j>0 && s[i] != s[j])
                j = next[j-1];
            if(s[i] == s[j])
                j++;
            next[i] = j;
        }
        
    }
    int strStr(string haystack, string needle) {
        if(needle.size() == 0)
            return 0;
        int next[needle.size()];
        getNext(next, needle);
        int j =0;
        for (int i = 0; i < haystack.size(); i++)
        {
            while(j>0 && haystack[i] != needle[j])
                j = next[j-1];
            if(haystack[i] == needle[j])
                j++;
            if(j == needle.size())
                return (i-needle.size()+1);
        }
        return -1;
    }
};
// @lc code=end

