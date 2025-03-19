///week05-3.cpp
///leetcode 2206. divide array ilto equal pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501]={}; //開501大小的陣列全部補0
        int odd=0;
        for(int i=0;i<nums.size();i++) {
            int now = nums[i];//現在除理數字
            a[now]++;//now增加一次
            if(a[now]%2==0) odd--;
            else odd++;
        }
        if (odd==0) return true;
        else return false;
    }
};
