class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>v;
        stack<int>st;
        int j=0;
        for(int i=1;i<=n&&j<target.size();i++){
            if(i==target[j]){
                st.push(i);
                v.push_back("Push");
                j++;
            }
            else{
                st.push(i);
                v.push_back("Push");
                st.pop();
                v.push_back("Pop");
            }
        }
        return v;
    }
};