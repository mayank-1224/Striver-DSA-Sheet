class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(matrix[i][j] == 0)
                {
                    for(int jj = 0; jj < c; jj++)
                    {
                        if(matrix[i][jj] != 0)
                            matrix[i][jj] = INT_MIN;
                    }
                    for(int ii = 0; ii < r; ii++)
                    {
                        if(matrix[ii][j] != 0)
                            matrix[ii][j] = INT_MIN;
                    }
                }
            }
        }
        
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(matrix[i][j] == INT_MIN)
                    matrix[i][j] = 0;
            }
        }
    }
};
