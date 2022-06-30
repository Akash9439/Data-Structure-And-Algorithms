class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&matrix){
        // Code here
        vector<int> v;
        int row,col;
        row=matrix.size();
        col=matrix[0].size();
        if(row==1)
        {
            for(int i=0;i<col;i++)
            {
                v.push_back(matrix[0][i]);
            }
        }
        else if(col==1)
        {
            for(int i=0;i<row;i++)
            {
                v.push_back(matrix[i][0]);
            }
        }
        else if(row==1 && col==1)
        {
            v.push_back(matrix[row][col]);
        }
        else
        {
        int i;
        for(i=0;i<col;i++)
        {
            v.push_back(matrix[0][i]);
        }
        for(i=1;i<row-1;i++)
        {
            v.push_back(matrix[i][0]);
            v.push_back(matrix[i][col-1]);
        }
        for(i=0;i<col;i++)
        {
            v.push_back(matrix[row-1][i]);
        }
        }
        return v;
    }
};
