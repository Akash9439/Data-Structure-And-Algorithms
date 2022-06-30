class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        int i,j;
        vector<int> v;
        for(i=0;i<matrix.size();i++)
        {
            if(i%2==0)
            {
                for(j=0;j<matrix[i].size();j++)
                {
                    v.push_back(matrix[i][j]);
                }
            }
            else
            {
                for(j=matrix[i].size()-1;j>=0;j--)
                {
                    v.push_back(matrix[i][j]);
                }
            }
        }
        return v;
    }
};

//IP- 1 3 
//    5 7
//OP- 1 3 7 5
     
