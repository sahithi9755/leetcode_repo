class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<vector<char>> v(strs.size(), vector<char>(strs[0].size()));
        string s,s1,s2;
        int c=0;
        for (int i = 0; i < strs.size(); i++) {
            for (int j = 0; j < strs[0].size(); j++) {
                v[i][j] = strs[i][j];
            }
        }

        vector<vector<char>> v1(v[0].size(), vector<char>(v.size()));
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[0].size(); j++) {
                v1[j][i] = v[i][j];
            }
        }
         for (int i = 0; i < v1.size(); i++) {
            s="";
            for (int j = 0; j < v1[0].size(); j++) {
                s+=v1[i][j];
            }
            s1=s;
            sort(s.begin(),s.end());
            s2=s;
            if(s1==s2){
                c+=1;
            }
        }
        return v1.size()-c;
    }
};
