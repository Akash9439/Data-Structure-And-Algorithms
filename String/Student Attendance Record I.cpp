class Solution {
public:
    bool checkRecord(string s) 
    {
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                c++;
            }
        }
        if(c>=2)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                if(s[i]==s[i+1] && s[i+1]==s[i+2])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
