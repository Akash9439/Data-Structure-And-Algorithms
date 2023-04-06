class Solution {
public:
    void solve(vector<int> nums,vector<vector<int>>& ans,vector<int> op,int index)
    {
        if(index>=nums.size())
        {
            ans.push_back(op);
            return;
        }

        //exclude
        solve(nums,ans,op,index+1);
        //include
        int element=nums[index];
        op.push_back(element);
        solve(nums,ans,op,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>  op;
        int index=0;
        solve(nums,ans,op,index);
        return ans;
    }
};
