class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int overall_max = INT_MIN, curr_max = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            curr_max = max(nums[i], curr_max + nums[i]);
            overall_max = max(overall_max, curr_max);
        }
        return overall_max;
    }
};
