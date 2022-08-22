//https://leetcode.com/problems/combination-sum/

class Solution {
public:
    
    void rec(int i, int sum, vector<int>&ds, vector<vector<int>>&ans, vector<int>&a, int n)
    {
        if(sum == 0 || i == n)
        {
            if(sum == 0)
                ans.push_back(ds);
            return;
        }
        if(a[i] <= sum)
        {
            ds.push_back(a[i]);
            rec(i, sum - a[i], ds, ans, a, n);
            ds.pop_back();
        }
        rec(i + 1, sum, ds, ans, a, n);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        rec(0, target, ds, ans, candidates, candidates.size());
        return ans;
    }
};
