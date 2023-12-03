class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<vector<int>>& ans, vector<int>& k) {
     ans.push_back(k); 

        for (int i = index; i < nums.size(); i++) {
            if (i > index && nums[i] == nums[i - 1])
                continue;
            k.push_back(nums[i]);
            backtrack(i + 1, nums, ans, k);
            k.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> k;
        sort(nums.begin(), nums.end());
        backtrack(0, nums, ans, k);
        return ans;
    }
};
