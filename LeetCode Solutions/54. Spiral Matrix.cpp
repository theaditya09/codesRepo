class Solution {
public:

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int col = matrix[0].size();
        int row = matrix.size();
        vector<int> arr;
        
        int fr=0;
        int fc=0;
        int lr=row-1;
        int lc=col-1;

        int count = 1;
        while(fr<=lr && fc<=lc)
        {
            switch(count)
            {
            case 1:

                for(int j=fc; j<=lc; j++)
                {
                    arr.push_back(matrix[fr][j]);
                }
                count++;
                fr++;
                break;

            case 2:

                for(int i=fr; i<=lr; i++)
                {
                    arr.push_back(matrix[i][lc]);
                }
                count++;
                lc--;
                break;
            
            case 3:

                for(int j=lc; j>=fc; j--)
                {
                    arr.push_back(matrix[lr][j]);
                }
                count++;
                lr--;
                break;

            case 4:

                for(int i=lr; i>=fr; i--)
                {
                    arr.push_back(matrix[i][fc]);
                }
                count = 1;
                fc++;
                break;
            }
        }

        return arr;
    }
};