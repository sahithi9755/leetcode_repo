class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &itr:grid){
            sort(itr.begin(),itr.end());
        }
        int maxi=INT_MIN;
        int c=0;
        for(int j=0;j<grid[0].size();j++){
            for(int i=0;i<grid.size();i++){
                maxi=max(maxi,grid[i][j]);
            }
            c+=maxi;
        }
        return c;
    }
};