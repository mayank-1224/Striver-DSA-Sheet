//https://practice.geeksforgeeks.org/problems/subset-sums2234/1

void rec(int i, int sum, vector<int>&ans, vector<int>&a, int n)
    {
        if(i == n)
        {
            ans.push_back(sum);
            return;
        }
        rec(i + 1, sum + a[i], ans, a, n);
        rec(i + 1, sum, ans, a, n);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        rec(0, 0, ans, arr, N);
        return ans;
    }
