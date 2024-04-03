class Solution {
public:
    bool dfs(int i, int j, int count, vector<vector<char>>& board, string word){
        if(word.size()==count){
            return true;
        }

        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[count]){
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '#';

        bool ans = dfs(i+1, j, count+1, board, word) ||
                dfs(i-1, j, count+1, board, word) ||
                dfs(i, j+1, count+1, board, word) ||
                dfs(i, j-1, count+1, board, word);
        board[i][j] = temp;
        return ans;
    }

    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>>a;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==word[0] && dfs(i,j,0,board, word)){
                    return true;
                }
            }
        }
        return false;
    }
};