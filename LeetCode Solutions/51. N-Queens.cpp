class Solution {
public:

    void solve(vector<vector<string>>& ans, vector<string>& board, int row, int col, int n, vector<int>& lowerDiag, vector<int>& upperDiag, vector<int>& left)
    {
        if(col >= n)
        {
            ans.push_back(board);
            return;
        }

        for(int i = 0; i<n; i++)
        {
            if( left[i] == 0 && lowerDiag[i+col] == 0 && upperDiag[(n-1) + (col-i)] ==0 )
            {
                board[i][col] = 'Q';
                left[i] = 1;
                lowerDiag[i+col] = 1;
                upperDiag[(n-1) + (col-i)] = 1;
                solve(ans,board,row,col+1,n,lowerDiag,upperDiag,left);
                left[i] = 0;
                lowerDiag[i+col] = 0;
                upperDiag[(n-1) + (col-i)] = 0;
                board[i][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        vector<vector<string>> ans;
        string s(n,'.');
        for(int i=0; i<n; i++)
        {
            board[i] = s;
        }

        vector<int> lowerDiag(2*n-1, 0);
        vector<int> upperDiag(2*n-1,0);
        vector<int> left(n,0);

        solve(ans,board,0,0,n,lowerDiag,upperDiag,left);

        return ans;
    }
};