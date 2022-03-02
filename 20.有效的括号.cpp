/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-02 19:39:44
 * @FilePath     : e:\Leetcode刷题\20.有效的括号.cpp
 */
/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 鏈夋晥鐨勬嫭鍙?
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> m{{'(',1},{'[',2},{'{',3},
                                {')',4},{']',5},{'}',6}};
        stack<char> st;
        bool istrue=true;
        for(char c:s){
            int flag=m[c];
            if(flag>=1&&flag<=3) st.push(c);
            else if(!st.empty()&&m[st.top()]==flag-3) st.pop();
            else {istrue=false;break;}
        }
        if(!st.empty()) istrue=false;
        return istrue;
    }
};
// @lc code=end

