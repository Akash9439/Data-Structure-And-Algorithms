class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int> m;
        int ans;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second==1)
            {
                ans=x.first;
            }
        }
        return ans;
    }
};
