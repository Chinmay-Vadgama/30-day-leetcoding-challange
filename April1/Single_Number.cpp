static int __=[](){std::ios::sync_with_stdio(false);return 0;}();
class Solution {

public:
    int singleNumber(vector<int>& nums) {
        int op = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            op^=nums[i];
        }
        return op;
    }
};