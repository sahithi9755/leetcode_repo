class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        vector<pair<int,char>>v;
        string s1="";
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto itr:m){
            cout<<itr.first<<" ";
            v.push_back({itr.second,itr.first});
        }
        sort(v.rbegin(),v.rend());
        for(auto itr:v){
            while(itr.first--){
                s1+=itr.second;
            }
        }
        return s1;
    }
};