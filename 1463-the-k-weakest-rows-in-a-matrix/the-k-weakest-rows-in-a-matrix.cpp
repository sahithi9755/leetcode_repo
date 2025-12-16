class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>p;
        vector<int>v;
        vector<int>v1;
        vector<int>v2;
        int c=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    c+=1;
                }
            }
            v.push_back(c);
            c=0;
        }
        for(int i=0;i<v.size();i++){
            p.push_back({v[i],i});
        }
        sort(p.begin(),p.end());
        for(auto itr:p){
            v1.push_back(itr.second);
        }
        for(int i=0;i<k;i++){
            v2.push_back(v1[i]);
        }
        return v2;
    }
};