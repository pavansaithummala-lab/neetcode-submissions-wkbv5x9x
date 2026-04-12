class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> chars1;
        unordered_map<char, int> chars2;
        unordered_map<char, int> chars3[board.size()];
        int diag;

        for (int i=0; i<board.size(); i++){
            for (int j=0; j<board.size();j++){
                if ('.' != board[i][j]){
                    chars1[board[i][j]]++;
                    if(chars1[board[i][j]]>1){
                        return false;
                    }
                    diag = (i/3)*3+(j/3);
                    chars3[diag][board[i][j]]++;
                    if(chars3[diag][board[i][j]]>1){
                        return false;
                    }
                }
                if ('.' != board[j][i]){
                    chars2[board[j][i]]++;
                    if(chars2[board[j][i]]>1){
                        return false;
                    }
                }
            }
            chars1.clear();
            chars2.clear();
        }
        return true;
    }
};
