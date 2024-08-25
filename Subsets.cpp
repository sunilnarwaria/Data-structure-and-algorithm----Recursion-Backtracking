class Solution {
public:

    void totalsubsets(vector<vector<int>> &ans, vector<int> &vec,int i, int n, vector<int>& arr){

        if(i == n){
            ans.push_back(vec);
            return;
        }
        vec.push_back(arr[i]);
        totalsubsets(ans,vec,i+1,n,arr);
        vec.pop_back();
        totalsubsets(ans,vec,i+1,n,arr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
       
        vector<int>vec;

         totalsubsets(ans,vec,0,n,nums);
         return ans;
    }
};
