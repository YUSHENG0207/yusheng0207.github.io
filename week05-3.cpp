///week05-3.cpp
///leetcode 2206. divide array ilto equal pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501]={}; //�}501�j�p���}�C������0
        int odd=0;
        for(int i=0;i<nums.size();i++) {
            int now = nums[i];//�{�b���z�Ʀr
            a[now]++;//now�W�[�@��
            if(a[now]%2==0) odd--;
            else odd++;
        }
        if (odd==0) return true;
        else return false;
    }
};
