class Solution {
public:
    void solve(vector<string>& ans,string op,int index,string mapping[],string digits)
    {
        if(index>=digits.length())
        {
            ans.push_back(op);
            return;
        }

        int number=digits[index]-'0';
        string val=mapping[number];

        for(int i=0;i<val.length();i++)
        {
            op.push_back(val[i]);
            solve(ans,op,index+1,mapping,digits);
            op.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
        {
            return ans;
        }
        string op="";
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(ans,op,index,mapping,digits);
        return ans;
    }
};
