class Solution {
public:

        void totalsubsets(vector<vector<int>> &ans, vector<int> &vec,int i, int n, vector<int>& arr, int target, int s){
        
        if (target == 0) {
            ans.push_back(vec);
            return;
        }
        
        if (i == n || target < 0) {
            return;
        }
        vec.push_back(arr[i]);
        //s += arr[i];
        target -= arr[i];
        totalsubsets(ans,vec,i,n,arr,target,s);
        vec.pop_back();
       // s -= arr[i];
        target += arr[i];
        totalsubsets(ans,vec,i+1,n,arr,target,s);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

          int n = nums.size();
        vector<vector<int>> ans;
       
        vector<int>vec;

         totalsubsets(ans,vec,0,n,nums,target,0);
         return ans;
        
    }
};
