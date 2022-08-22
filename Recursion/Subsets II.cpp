class Solution {
public:
    void rec(int ind, vector<int>&ds, vector<vector<int>>&ans, vector<int>&a)
    {
        ans.push_back(ds);
        for(int i = ind; i < a.size(); i++)
        {
            if(i != ind && a[i] == a[i - 1])
                continue;
            ds.push_back(a[i]);
            rec(i + 1, ds, ans, a);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        rec(0, ds, ans, nums);
        return ans;
    }
};
