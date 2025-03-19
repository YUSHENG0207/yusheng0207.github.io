//week05-4.cpp
//LeetCode 3191. Minimum Operations to Make Binary Array Elements Equal
// 變更幾次「3 個數翻轉」，才能全部變成 1

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0; // 要「翻牌」的次數

        for(int i = 0; i < nums.size()-2; i++) { // 避免超出陣列範圍
            if(nums[i] == 0) {  // 遇到 0 需要翻牌
                ans++;  // 翻牌加一次
                nums[i+1] = 1 - nums[i+1]; // 反轉
                nums[i+2] = 1 - nums[i+2]; // 反轉
            }
        }

        int N = nums.size();
        if(nums[N-1] == 0 || nums[N-2] == 0) return -1; // 最後若有 0 則失敗
        return ans; // 可以成功翻牌，全部變成 1
    }
};
