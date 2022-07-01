class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        int rows=matrix[0].size();
        int cols=matrix.size();
        int i,j;
        for(i=0;i<rows-1;i++)
        {
            for(j=i+1;j<cols;j++)
            {
                if(i!=j)
                {
                    int temp=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                }
            }
        }
    }
};
