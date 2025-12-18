class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>v(r,vector<int>(c));
        vector<int>v1;
        int ct=0;
        int m=r*c;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                v1.push_back(mat[i][j]);
                ct++;
            }
        }
        cout<<ct<<" ";
        cout<<m<<" ";
        if(ct!=m){
            return mat;
        }
        int k=0;
        while(k<v1.size()){
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    v[i][j]=v1[k];
                    k++;
                }
            }
        }
        return v;
    }
};