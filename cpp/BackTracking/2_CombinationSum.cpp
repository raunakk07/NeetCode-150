class Solution {
public:
    void findCombination(int ind, int target, vector<int>& candidates,vector<vector<int>>& answer,vector<int>& ds,int n){
        if(ind >= n){
            if(target == 0 ) answer.push_back(ds);
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            
            findCombination(ind,target-candidates[ind],candidates,answer,ds,n);
            ds.pop_back();
        }
        findCombination(ind+1,target,candidates,answer,ds,n);

    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> answer;
        vector<int> ds;
        findCombination(0,target,candidates,answer,ds,n);
        return answer;

    }
};
