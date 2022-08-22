//https://leetcode.com/problems/combination-sum-ii/

class Solution {
public:
    
    void rec(int ind, int sum, vector<int>&ds, vector<vector<int>>&ans, vector<int>&a, int n)
    {
        if(sum == 0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i = ind; i < n; i++)
        {
            if(i != ind && a[i] == a[i - 1])
                continue;
            if(a[i] <= sum)
            {
                ds.push_back(a[i]);
                rec(i + 1, sum - a[i], ds, ans, a, n);
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        sort(a.begin(), a.end());
        vector<int>ds;
        vector<vector<int>>ans;
        rec(0, target, ds, ans, a, a.size());
        return ans;
    }
};
