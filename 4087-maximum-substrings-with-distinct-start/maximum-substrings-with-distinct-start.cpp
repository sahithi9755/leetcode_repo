class Solution {
public:
    int maxDistinct(string s) {
        map<char,int>m;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto itr:m){
            if(itr.first) cnt++;
        }
        return cnt;
    }
};