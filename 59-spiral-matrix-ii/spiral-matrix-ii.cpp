class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n));
        int x=1;
        int top=0,left=0,right=v[0].size()-1,bottom=v.size()-1;
        while(top<=bottom&&left<=right)
        {
            //top
            for(int i=left;i<=right;i++){
                v[top][i]=x++;
            }
            top++;
                //right
                for(int i=top;i<=bottom;i++){
                   v[i][right]=x++;
                }
                right--;
            if(top<=bottom){
                //bottom
                for(int i=right;i>=left;i--)
                {
                    v[bottom][i]=x++;
                }
                bottom--;
            }
            //left
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                    v[i][left]=x++;
                }
            left++;
            }
        }
        return v;
    }
};