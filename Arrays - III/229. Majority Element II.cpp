class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int n1 = -1, n2 = -1, c1 = 0, c2 = 0;
    for(int x : nums)
    {
        if(x == n1)
            c1++;
        else if(x == n2)
            c2++;
        else if(c1 == 0)
        {
            n1 = x;
            c1 = 1;
        }
        else if(c2 == 0)
        {
            n2 = x;
            c2 = 1;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    vector<int>ans;
    c1 = c2 = 0;
    for(int x : nums)
    {
        if (x == n1)
            c1++;
        else if(x == n2)
            c2++;
    }
    if(c1 > nums.size() / 3)
        ans.push_back(n1);
    if(c2 > nums.size() / 3)
        ans.push_back(n2);
    return ans;
    }
};
