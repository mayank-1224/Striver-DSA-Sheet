class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> Map;
        vector<int>ans;
        
        map<int,int>::iterator it;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            it = Map.find(diff);
            if(it != Map.end())
            {
                int a = it->second;
                ans.push_back(i);
                ans.push_back(a);
                return ans;
            }
            Map.insert(pair<int,int>(nums[i],i));
        }
        return ans;
    }
};
