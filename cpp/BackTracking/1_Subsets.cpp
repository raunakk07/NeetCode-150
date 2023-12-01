class Solution {
public:
    void returnSubset(int ind,vector<vector<int>>& answer,vector<int>& nums,vector<int>& ds, int n ){
        if(ind>=n){
            answer.push_back(ds);
            return;
        }
        ds.push_back(nums[ind]);
        returnSubset(ind+1,answer,nums,ds,n);
        ds.pop_back();
        returnSubset(ind+1,answer,nums,ds,n);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        int n = nums.size();
        vector<int> ds;
        returnSubset(0,answer,nums,ds,n);
        return answer;
    }
};
