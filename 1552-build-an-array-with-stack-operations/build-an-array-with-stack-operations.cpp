class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>v;
        stack<int>st;
        int j=0;
        for(int i=1;i<=n&&j<target.size();i++){
            st.push(i);
            if(i==target[j]){
                v.push_back("Push");
                j++;
            }
            else{
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        return v;
    }
};