//week05-4.cpp
//LeetCode 3191. Minimum Operations to Make Binary Array Elements Equal
// �ܧ�X���u3 �Ӽ�½��v�A�~������ܦ� 1

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0; // �n�u½�P�v������

        for(int i = 0; i < nums.size()-2; i++) { // �קK�W�X�}�C�d��
            if(nums[i] == 0) {  // �J�� 0 �ݭn½�P
                ans++;  // ½�P�[�@��
                nums[i+1] = 1 - nums[i+1]; // ����
                nums[i+2] = 1 - nums[i+2]; // ����
            }
        }

        int N = nums.size();
        if(nums[N-1] == 0 || nums[N-2] == 0) return -1; // �̫�Y�� 0 �h����
        return ans; // �i�H���\½�P�A�����ܦ� 1
    }
};
