class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x=0,y=0;
        int c=0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='R'){
                    x=i;
                    y=j;
                }
            }
        }
        int a=x;
        int b=y;
        y=y+1;
        while(y<8){
            if(board[x][y]=='B') break;
            if(board[x][y]=='p'){
                c+=1;
                break;
            }
            y++;
        }
        x=a;
        y=b;
        y=y-1;
        while(y>=0){
            if(board[x][y]=='B') break;
            if(board[x][y]=='p'){
                c+=1;
                break;
            }
            y--;
        }
        x=a;
        y=b;
        x=x-1;
        while(x>=0){
            if(board[x][y]=='B') break;
            if(board[x][y]=='p'){
                c+=1;
                break;
            }
            x--;
        }
        x=a;
        y=b;
        x=x+1;
        while(x<8){
            if(board[x][y]=='B') break;
            if(board[x][y]=='p'){
                c+=1;
                break;
            }
            x++;
        }
        return c;
    }
};