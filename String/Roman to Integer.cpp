/*Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.*/


unordered_map<char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]<m[s[i+1]])
            {
                sum-=m[s[i]];
            }
            else if(m[s[i]]>=m[s[i+1]])
            {
                sum+=m[s[i]];
            }
        }
        return sum;
