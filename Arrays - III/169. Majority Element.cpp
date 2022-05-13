class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr = 0, cnt = 0;
        for(int x : nums)
        {
            if(cnt == 0)
                curr = x;
            if(curr == x)
                cnt++;
            else
                cnt--;
        }
        return curr;
    }
};
