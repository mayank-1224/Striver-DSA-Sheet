class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int a[n * n], b[n * n];
        
        for(int i = 0, k = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                a[k++] = matrix[i][j];
        
        int i = 0, cnt = n + 1;
        while(i < n * n)
        {
            cnt--;
            for(int j = (n * n) - cnt, k = 0; k < n; j -= n, k++)
                b[i++] = a[j];
        }
        
        for(int i = 0, k = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                matrix[i][j] = b[k++];
    }
};
