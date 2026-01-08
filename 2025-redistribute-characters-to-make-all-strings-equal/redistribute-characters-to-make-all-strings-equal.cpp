class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>m;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                m[words[i][j]]++;
            }
        }
        for(auto itr:m){
            if(itr.second%words.size()!=0){
                return false;
            }
        }
        return true;
    }
};