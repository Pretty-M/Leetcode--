/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-02 20:23:12
 * @FilePath     : e:\Leetcode刷题\150.逆波兰表达式求值.cpp
 */
/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 閫嗘尝鍏拌〃杈惧紡姹傚�?
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        int n = tokens.size();
        for (int i = 0; i < n; i++)
        {
            string& token = tokens[i];
            if(isNumber(token))
                res.push(atoi(token.c_str()));
            else {
                int num2 = res.top();
                res.pop();
                int num1 = res.top();
                res.pop();
                switch (token[0]) {
                    case '+':
                        res.push(num1 + num2);
                        break;
                    case '-':
                        res.push(num1 - num2);
                        break;
                    case '*':
                        res.push(num1 * num2);
                        break;
                    case '/':
                        res.push(num1 / num2);
                        break;
                }
            }
        }
        return res.top();
    }
    bool isNumber(string& token) {
        return !(token=="+" || token=="-" || token=="*" || token=="/");
    }
};
// @lc code=end

