// create a map that checks if the element is picked or not. map[i] = 0 if not picked yet and map[i] = 1 if picked and we'll iterate in map from 0 to n in every line to confirm if everything is used or not.
class Solution {
public:
    void recurPermute(vector<int> &ds,vector <int> &nums,vector<vector<int>> &answer,int freq[]){
        if(ds.size() == nums.size()){
            answer.push_back(ds);
            return;
        }
        for(int i =0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                recurPermute(ds,nums,answer,freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> ds;
        int freq[nums.size()];
        for(int i =0;i<nums.size();i++){
            freq[i]=0;
            recurPermute(ds,nums,answer,freq);
        }
        return answer;

    }
};
