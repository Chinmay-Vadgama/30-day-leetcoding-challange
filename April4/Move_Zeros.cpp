class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]==0)
            {
                cnt++;
            }
            else
            {
                nums[i-cnt] = nums[i];
                if(cnt!=0)
                { 
                    nums[i] = 0;
                }
            }
            i++;
        }
    }
};