class Solution {
public:
    bool isPossibleToPut(vector<string>&nQueens,int row,int col,int n){
        //uper
        for(int i=row-1;i>=0;i--){
            if(nQueens[i][col]=='Q') return false;
        }
        //lower
        for(int i=row+1;i<n;i++){
            if(nQueens[i][col]=='Q') return false;
        }
        
        // left diagonal
        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
            if(nQueens[i][j]=='Q') return false;
        }
        
        //right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
            if (nQueens[i][j] == 'Q') return false;
        return true;
    }
    void solveNQueenHeper(vector<vector<string>>& board,vector<string>&nQueen,int n,int row) {
        if(row==n){
            board.push_back(nQueen);
            return;
        }
        for(int j=0;j<n;j++){
            if(isPossibleToPut(nQueen,row,j,n)){
                nQueen[row][j]='Q';
                solveNQueenHeper(board,nQueen,n,row+1);
                nQueen[row][j]='.';
            }           
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> board;
        vector<string>nQueen(n,string(n,'.'));
        solveNQueenHeper(board,nQueen,n,0);
        return board;
    }
};