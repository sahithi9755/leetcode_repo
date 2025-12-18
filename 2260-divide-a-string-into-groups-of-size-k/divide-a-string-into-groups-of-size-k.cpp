class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>v;
        string s1="";
        for(int i=0;i<s.size();i++){
            s1+=s[i];
            if(s1.size()==k){
                v.push_back(s1);
                s1="";
            }
        }
         if(s.size()%k==0){
            return v;
        }
        int c=0;
        c=s.size()%k;
        cout<<c<<" ";
        int r=k-s1.size();
        while(r--){
            s1+=fill;
        }
        v.push_back(s1);
        return v;
    }
};