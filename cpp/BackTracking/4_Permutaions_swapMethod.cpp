//take index and swap with remaining index in a recurrence call till index surpasses size of array

class Solution {
public:
    void recurPermute(int ind,vector<int> &nums,vector<vector<int>> &answer){
        if(ind == nums.size()){
            answer.push_back(nums);
            return;

        }
        for(int i = ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            recurPermute(ind+1,nums,answer);
            swap(nums[ind],nums[i]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answer;
        recurPermute(0,nums,answer);
        return answer;
    }
};
