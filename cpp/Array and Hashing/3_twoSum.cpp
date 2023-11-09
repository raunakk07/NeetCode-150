//take a hashmap and check if complement of a no already exists. If it does return if not store the number to that index.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n = nums.size();

        for(int i =0;i<n;i++){
            int complement = target - nums[i];
            if(m.count(complement)){
                return {m[complement],i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
