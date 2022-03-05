/*
 * @Descripttion : 通信B184
 * @Autor        : Dingchang
 * @Date         : 2022-03-02 20:59:54
 * @FilePath     : e:\Leetcode刷题\239.滑动窗口最大值.cpp
 */
/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 婊戝姩绐楀彛鏈�澶у�?
 */

// @lc code=start
class Solution {
public:
    static bool cmp(int x, int y){
        return x > y;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> buckets;
        for(const auto& i : nums)
            buckets[i]++;

        vector<int> tmp;
        for(const auto& i : buckets)
            tmp.push_back(i.second);

        sort(tmp.begin(), tmp.end(), cmp);
        tmp.resize(k);


        vector<int> result;
        for(const auto& i : buckets){
            if(find(tmp.begin(), tmp.end(), i.second) != tmp.end())
                result.push_back(i.first);
        }

        return result;

    }
};
// @lc code=end

