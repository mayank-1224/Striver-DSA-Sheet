//uses Moore Voting Algorithm
// majority -> n/2 + x
//minority -> n/2 + x
//at some point they will become equal
// can also use hashing, also sorting then returning the median

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
