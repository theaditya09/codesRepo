class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int fr = 0;
        int lr = row-1;
        int fc = 0;
        int lc = col-1;

        while(fr<=lr && fc<=lc)
        {
                for(int j=fc; j<=lc; j++)
                {
                    int temp = matrix[fr][j];
                    matrix[fr][j] = matrix[j][fr];
                    matrix[j][fr] = temp;
                }
            fr++;
            fc++;
        }

        for(int i=0; i<row; i++)
        {
            int start = 0;
            int end = col-1;
            while(start<end)
            {
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};