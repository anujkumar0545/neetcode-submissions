class Solution {
public:

    int computeBoxIndex(int i, int j)
    {
        int bi = i/3;
        int bj = j/3;
        return bi*3 + bj;
    }

    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);
        for(int i = 0;i < 9;i++)
        {            
            for(int j = 0;j < 9;j++)
            {
                if(board[i][j] == '.')
                    continue;
                if(rows[i].contains(board[i][j]))
                    return false;
                else 
                    rows[i].insert(board[i][j]);    

                if(cols[j].contains(board[i][j]))
                    return false;
                else 
                    cols[j].insert(board[i][j]);              

                int boxIndex = computeBoxIndex(i, j);
                if(boxes[boxIndex].contains(board[i][j]))
                    return false;
                else
                    boxes[boxIndex].insert(board[i][j]);             
            }
        }
        return true;        
    }
};
