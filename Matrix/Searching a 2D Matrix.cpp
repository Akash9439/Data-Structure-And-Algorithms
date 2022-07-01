class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int i,j;
        bool flag=false;
        for(i=0;i<rows;i++)
        {
            for(j=0;j<cols;j++)
            {
                if(matrix[i][j]==target)
                {
                    flag=true;
                }
            }
        }
        return flag;
    }
};
