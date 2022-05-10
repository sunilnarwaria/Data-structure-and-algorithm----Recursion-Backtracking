
// leetcode 39
class Solution {
public:
    
    void find(vector<int>& candidates,vector < vector<int>> &ans,int idx,int target,int n,vector<int> &res){
        
        if(idx == n){
            if( target == 0){
                ans.push_back(res);
                
            }
           return; 
        }
        if(candidates[idx] <= target){
        res.push_back(candidates[idx]);
        find(candidates,ans,idx,target - candidates[idx] ,n,res);
        res.pop_back();
        }
        find(candidates,ans,idx + 1,target,n,res);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int n = candidates.size();
        vector < vector<int>> ans;
        vector<int>res;
        int idx = 0;
       
        find(candidates,ans,idx,target,n,res);
        return ans;
        
    }
};
